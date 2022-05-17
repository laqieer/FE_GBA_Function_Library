#!/usr/bin/env python3

functions = {}

def read_decomp():
    with open('fireemblem8u.txt') as f:
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
            functions[addr] = {'name': l[2], 'decl': decl, 'filename': filename, 'linenum': linenum}

def improve_library():
    with open('functions.md') as f_in, open('index.md', 'w') as f_out:
        lines = f_in.readlines()
        for line in lines[:4]:
            f_out.write(line)
        for line in lines[4:]:
            info = line.split('|')
            if info[5] in functions:
                function = functions[info[5]]
                if info[6].endswith('(ARM)'):
                    info[6] = f"{function['name']}(ARM)"
                else:
                    info[6] = function['name']
                info[7] = f"[{function['decl']}](https://github.com/laqieer/fireemblem8u/blob/remove_tools/{function['filename'][36:]}#L{function['linenum']})"
            f_out.write('|'.join(info))

read_decomp()
improve_library()
