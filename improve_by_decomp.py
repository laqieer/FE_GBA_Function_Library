#!/usr/bin/env python3

infiles = (
        "fe6.txt",
        "fireemblem8u.txt"
        )

columns = {
        "fe6.txt": 1,
        "fireemblem8u.txt": 5
        }

prefixs = {
        "fe6.txt": "https://github.com/StanHash/fe6/blob/0b25087",
        "fireemblem8u.txt": "https://github.com/laqieer/fireemblem8u/blob/remove_tools"
        }

functions = {}
symbols = {}

def read_decomp():
    for infile in infiles:
        functions[infile] = {}
        with open(infile) as f:
            lines = f.readlines()
            for line in lines:
                l = line.split()
                filename, linenum = l[3].split(':')
                linenum = int(linenum)
                with open(filename) as f_src:
                    src = f_src.readlines()
                    decl = src[linenum - 1]
                    if decl[0] == '{':
                        linenum -= 1
                        decl = src[linenum - 1].replace('\n', '')
                    else:
                        decl = decl.split('{')[0]
                addr = format(int(l[0], 16) & 0xFFFFFFE, 'X')
                functions[infile][addr] = {'name': l[2], 'decl': decl, 'filename': filename, 'linenum': linenum}

def read_multisym():
    with open('multisym.txt') as f:
        lines = f.readlines()
        for line in lines:
            addr = format(int(line[:8], 16) & 0xFFFFFFE, 'X')
            name = line[9:].strip().split(', ')
            symbols[addr] = name

def improve_library():
    with open('functions.md') as f_in, open('index.md', 'w') as f_out:
        lines = f_in.readlines()
        for line in lines[:4]:
            f_out.write(line)
        for line in lines[4:]:
            info = line.split('|')
            functionss = []
            for infile in infiles:
                addr = info[columns[infile]]
                if addr in functions[infile]:
                    function = functions[infile][addr]
                    function['infile'] = infile
                    functionss.append(function)
            for i, function in enumerate(functionss):
                if i > 0:
                    info[7] += '<br>'
                else:
                    info[7] = ''
                info[7] += f"[{function['decl']}]({prefixs[function['infile']]}/src/{function['filename'].split('/src/')[1]}#L{function['linenum']})"
                if i > 0:
                    continue
                if info[6].endswith('(ARM)'):
                    info[6] = f"{function['name']}(ARM)"
                else:
                    info[6] = function['name']
            i = 0
            for name in symbols.get(addr, []):
                if name == info[6] or name + '(ARM)' == info[6]:
                    continue
                if i > 0:
                    info[8] = ', ' + info[8]
                elif info[8] != '':
                    info[8] = '<br>' + info[8]
                info[8] = name + info[8]
                i += 1
            f_out.write('|'.join(info))

read_decomp()
read_multisym()
improve_library()
