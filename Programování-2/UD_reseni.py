class Prvek:
    def __init__(self, x, dalsi):
        self.x = x
        self.dalsi = dalsi


def VytiskniLSS(p):
    print("LSS:", end=" ")
    while p != None:
        print(p.x, end=" ")
        p = p.dalsi
    print(".")


def NactiLSS():
    """cte cisla z radku, dokud nenacte prazdny radek"""
    prvni = None
    posledni = None
    r = input()
    while r != "":
        radek = r.split()
        if len(radek) == 0:  # protoze ten test r!="" v RCDX neukoncil cyklus!
            break
        for s in radek:
            p = Prvek(int(s), None)
            if prvni == None:
                prvni = p
            else:
                posledni.dalsi = p
            posledni = p
        r = input()
    return prvni

#################################################


def UnionDestruct(a, b):
    """ destruktivni sjednoceni dvou usporadanych seznamu
    * nevytvari zadne nove prvky, vysledny seznam bude poskladany z prvku puvodnich seznamu,
    * vysledek je MNOZINA, takze se hodnoty neopakuji """
    hlava = Prvek("head", None)
    konec = hlava
    while a != None and b != None:
        if a.x > b.x:
            konec.dalsi = b
            konec = b
            b = b.dalsi
        elif a.x < b.x:
            konec.dalsi = a
            konec = a
            a = a.dalsi
        else:
            konec.dalsi = a
            konec = a
            a = a.dalsi
            b = b.dalsi
    if a != None:
        konec.dalsi = a
    if b != None:
        konec.dalsi = b
    return hlava.dalsi

#################################################


VytiskniLSS(UnionDestruct(NactiLSS(), NactiLSS()))
