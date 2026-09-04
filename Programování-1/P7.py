def prevrat(a):
    return a[::-1]


def otocCislo(a):
    return int(prevrat(str(a)))

def pocetSlov(a):
    return len(a.split())

def pocetRuznychSlov(a):
    strArray = a.split()
    newArray = []
    for i in strArray:
        if not i in newArray:
            newArray.append(i)
    return len(newArray)

def sectiString(a):
    inp = a.split(sep = "+")
    suma = 0
    for i in inp:
        suma +=int(i)
    return suma

