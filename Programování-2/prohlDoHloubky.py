#!/usr/bin/python3
# Prohledávání grafu do šířky
# Graf je reprezentovaný pomocí seznamů sousedů

from collections import deque

# Načteme vstup: nejprve počet vrcholů n, pak n řádků se sousedy jednotlivých vrcholů
n = int(input())
sousede = []
for i in range(n):
    sousede.append([int(j) for j in input().split()])

# Pro kontrolu vypíšeme reprezentaci grafu
print(sousede)

# Prohledávání do šířky


def prohledej(v0):
    byl_jsem = [False] * n
    byl_jsem[v0] = True
    vzdalenost = [None] * n
    vzdalenost[v0] = 0
    fronta = deque()
    fronta.append(v0)

    while fronta:
        u = fronta.popleft()
        print(u, vzdalenost[u])
        for v in sousede[u]:
            if not byl_jsem[v]:
                byl_jsem[v] = True
                vzdalenost[v] = vzdalenost[u] + 1
                fronta.append(v)


def pocetKomponent():
    def prohledejKomp(v0, byl_jsem):
        byl_jsem[v0] = True
        fronta = deque()
        fronta.append(v0)

        while fronta:
            u = fronta.popleft()
            for v in sousede[u]:
                if not byl_jsem[v]:
                    byl_jsem[v] = True
                    fronta.append(v)
        return byl_jsem

    komponenty = 0
    byl_jsem = [False]*n
    while False in byl_jsem:
        i = byl_jsem.index(False)
        byl_jsem = prohledejKomp(i, byl_jsem)
        komponenty += 1
    return komponenty


print(pocetKomponent())
