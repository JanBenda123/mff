a = input().strip()
b = input().strip()


def secti(a, b):
    a = nacti(a)
    b = nacti(b)
    c = []
    prenos = 0

    if len(a) < len(b):
        a, b = b, a
    for i in range(len(a)):
        if i < len(b):
            bi = b[i]
        else:
            bi = 0
        s = a[i]+bi + prenos
        c.append(s % 10)
        prenos = s//10
    if prenos > 0:
        c.append(prenos)
    return "".join([str(i) for i in reversed(c)])


def vynasobJednocifernym(n, jednociferne):
    n = nacti(n)
    jednocif = int(jednociferne)
    prenos = 0
    c = []
    for i in range(len(n)):
        s = n[i]*jednocif + prenos
        c.append(s % 10)
        prenos = s//10
    if prenos > 0:
        c.append(prenos)
    return "".join([str(i) for i in reversed(c)])


def vynasobCisla(a, b):
    b = nacti(b)
    mezivysledky = []
    for i in range(len(b)):
        mezivysledky.append(vynasobJednocifernym(a, b[i]) + "0"*i)
    while len(mezivysledky) > 1:
        i = len(mezivysledky)-1
        mezivysledky[i-1] = secti(mezivysledky[i-1], mezivysledky[i])
        mezivysledky.pop(i)
    return mezivysledky[0]


def nacti(x):
    return [int(pismeno) for pismeno in reversed(x)]


print(vynasobCisla(a, b))
