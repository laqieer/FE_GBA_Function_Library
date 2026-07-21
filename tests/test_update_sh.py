import os
import subprocess
import unittest
from pathlib import Path
from tempfile import TemporaryDirectory


ROOT = Path(__file__).resolve().parents[1]
UPDATE = ROOT / 'update.sh'
GAMES = {
    'fe6': ('fe6.elf', 'fe6.txt'),
    'fe8u': ('fireemblem8u.elf', 'fireemblem8u.txt'),
    'fe8j': ('fireemblem8j.elf', 'fireemblem8j.txt'),
}


def write_executable(path, text):
    path.write_text(text)
    path.chmod(0o755)


class UpdateDispatchTests(unittest.TestCase):
    def prepare(self, directory, *, empty_nm=False, finalizers=False):
        directory = Path(directory)
        bindir = directory / 'bin'
        bindir.mkdir()
        event_log = directory / 'events.log'
        event_log.write_text('')

        nm_output = (
            'exit 0\n'
            if empty_nm else
            'base=$(basename "$3" .elf)\n'
            'printf "08001001 T Symbol_%s %s/src/%s.c:1\\n" '
            '"$base" "$base" "$base"\n'
        )
        fake_nm = bindir / 'arm-none-eabi-nm'
        write_executable(
            fake_nm,
            '#!/bin/sh\n'
            'printf "nm:%s\\n" "$(basename "$3")" >> "$EVENT_LOG"\n'
            f'{nm_output}',
        )

        outputs = {}
        environment = os.environ.copy()
        environment.update({
            'NM': str(fake_nm),
            'EVENT_LOG': str(event_log),
            'PATH': f"{bindir}:{environment['PATH']}",
        })
        for game, (elf_name, output_name) in GAMES.items():
            elf_dir = directory / game
            elf_dir.mkdir()
            elf = elf_dir / elf_name
            elf.write_bytes(b'dummy, never read by the fake NM')
            output = directory / output_name
            output.write_bytes(f'original-{game}\n'.encode())
            outputs[game] = output
            environment[f'{game.upper()}_ELF'] = str(elf)

        if finalizers:
            write_executable(
                directory / 'improve_by_decomp.py',
                '#!/bin/sh\nprintf "finalize:generator\\n" >> "$EVENT_LOG"\n',
            )
            write_executable(
                directory / 'validate_library.py',
                '#!/bin/sh\nprintf "finalize:validator\\n" >> "$EVENT_LOG"\n',
            )
            write_executable(
                bindir / 'python3',
                '#!/bin/sh\n'
                'printf "finalize:tests:%s\\n" "$*" >> "$EVENT_LOG"\n',
            )

        return environment, event_log, outputs

    def run_update(self, directory, environment, *arguments):
        return subprocess.run(
            [str(UPDATE), *arguments],
            cwd=directory,
            env=environment,
            capture_output=True,
            text=True,
            check=False,
        )

    def test_each_extract_invokes_only_its_nm_and_changes_only_its_output(self):
        for game, (elf_name, _) in GAMES.items():
            with self.subTest(game=game), TemporaryDirectory() as directory:
                environment, events, outputs = self.prepare(directory)
                before = {
                    name: path.read_bytes() for name, path in outputs.items()
                }

                result = self.run_update(
                    directory,
                    environment,
                    'extract',
                    game,
                )

                self.assertEqual(result.returncode, 0, result.stderr)
                self.assertEqual(events.read_text(), f'nm:{elf_name}\n')
                for candidate, output in outputs.items():
                    if candidate == game:
                        self.assertNotEqual(output.read_bytes(), before[candidate])
                        self.assertIn(b'08001001 T Symbol_', output.read_bytes())
                    else:
                        self.assertEqual(output.read_bytes(), before[candidate])

    def test_extract_does_not_invoke_any_final_stage(self):
        with TemporaryDirectory() as directory:
            environment, events, _ = self.prepare(
                directory,
                finalizers=True,
            )

            result = self.run_update(
                directory,
                environment,
                'extract',
                'fe8u',
            )

            self.assertEqual(result.returncode, 0, result.stderr)
            self.assertEqual(events.read_text(), 'nm:fireemblem8u.elf\n')

    def test_debug_stripped_extract_preserves_existing_output(self):
        with TemporaryDirectory() as directory:
            environment, events, outputs = self.prepare(
                directory,
                empty_nm=True,
            )
            before = outputs['fe6'].read_bytes()

            result = self.run_update(
                directory,
                environment,
                'extract',
                'fe6',
            )

            self.assertEqual(result.returncode, 0, result.stderr)
            self.assertEqual(events.read_text(), 'nm:fe6.elf\n')
            self.assertEqual(outputs['fe6'].read_bytes(), before)
            self.assertIn('keeping existing fe6.txt', result.stderr)

    def test_finalize_runs_only_final_stage_commands(self):
        with TemporaryDirectory() as directory:
            environment, events, outputs = self.prepare(
                directory,
                finalizers=True,
            )
            before = {
                name: path.read_bytes() for name, path in outputs.items()
            }

            result = self.run_update(directory, environment, 'finalize')

            self.assertEqual(result.returncode, 0, result.stderr)
            self.assertEqual(
                events.read_text().splitlines(),
                [
                    'finalize:generator',
                    'finalize:tests:-m unittest discover -v',
                    'finalize:validator',
                ],
            )
            self.assertEqual(
                {name: path.read_bytes() for name, path in outputs.items()},
                before,
            )

    def test_no_argument_mode_is_strictly_sequential_then_finalizes(self):
        with TemporaryDirectory() as directory:
            environment, events, _ = self.prepare(
                directory,
                finalizers=True,
            )

            result = self.run_update(directory, environment)

            self.assertEqual(result.returncode, 0, result.stderr)
            self.assertEqual(
                events.read_text().splitlines(),
                [
                    'nm:fe6.elf',
                    'nm:fireemblem8u.elf',
                    'nm:fireemblem8j.elf',
                    'finalize:generator',
                    'finalize:tests:-m unittest discover -v',
                    'finalize:validator',
                ],
            )

    def test_invalid_cli_fails_with_usage(self):
        invalid_arguments = (
            ('extract',),
            ('extract', 'unknown'),
            ('extract', 'fe6', 'extra'),
            ('finalize', 'extra'),
            ('unknown',),
        )
        for arguments in invalid_arguments:
            with self.subTest(arguments=arguments), TemporaryDirectory() as directory:
                environment, events, _ = self.prepare(directory)

                result = self.run_update(
                    directory,
                    environment,
                    *arguments,
                )

                self.assertNotEqual(result.returncode, 0)
                self.assertIn('usage:', result.stderr)
                self.assertEqual(events.read_text(), '')


if __name__ == '__main__':
    unittest.main()
