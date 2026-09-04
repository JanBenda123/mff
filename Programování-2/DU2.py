file = open("soubor.txt", "r")
radky = file.read()
zavorky = []
file.close()

# def switch(c):
# if c[0] in ("(", ")", "[", "]"):
# return c
# if c in ("/", "<", "?", "*"):
# pass

i = 0
while i < len(radky):
    c = radky[i:i+2]
    if c in ("<?", "?>", "/*", "*/"):
        zavorky.append(c)
        i += 2
        continue
    elif c[0] in ("(", ")", "{", "}", "[", "]", "<", ">"):
        zavorky.append(c[0])
        i += 1
        continue
    i += 1


def zkontrolujZavorky(zavorky):
    delkaZavorek = len(zavorky)
    if delkaZavorek % 2 == 1:
        return False
    while delkaZavorek != 0:
        if zavorky[0] in (")", "}", "]", ">", "?>", "*/"):
            return False

        i = 0
        while i < delkaZavorek-1:
            if zavorky[i]+zavorky[i+1] in ("()", "[]", "<>", "{}", "<??>", "/**/"):
                zavorky = zavorky[0:i]+zavorky[i+2:]
                delkaZavorek -= 2
            else:
                i += 1
    return True


print(["ne", "ano"][zkontrolujZavorky(zavorky)])
