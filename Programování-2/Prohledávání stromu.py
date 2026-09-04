#!/usr/bin/python3
# Hledání dosažitelných políček v bludišti
# Bludiště se načítá ze souboru "bludiste.in":
#    "." značí volná políčka
#    "#" jsou zdi
#    "0" je počáteční políčko
#    "o" zapíšeme na všechna dosažitelná políčka

from collections import deque


class Bludiste:

    def __init__(self):
        self.bludiste = []
        self.radku = 0
        self.sloupcu = 0

    def nacti(self, soubor):
        with open(soubor) as f:
            for radek in f:
                self.bludiste.append(list(radek.strip()))
        self.radku = len(self.bludiste)
        self.sloupcu = len(self.bludiste[0])

    def vypis(self):
        for r in self.bludiste:
            print("".join([s.center(4) for s in r]))

    def najdi_start(self):
        for r in range(self.radku):
            for s in range(self.sloupcu):
                if self.bludiste[r][s] == '0':
                    return r, s
        raise RuntimeError("Jsem ztracen: bludiště nemá začátek!")

    def hledani_do_sirky(self, r, s):
        fronta = deque()
        fronta.append((r, s))
        self.bludiste[r][s] = 'o'

        def soused(rr, ss):
            if 0 <= rr < self.radku and \
               0 <= ss < self.sloupcu and \
               self.bludiste[rr][ss] == '.':
                self.bludiste[rr][ss] = 'o'
                fronta.append((rr, ss))

        while fronta:
            r, s = fronta.popleft()
            soused(r-1, s)
            soused(r+1, s)
            soused(r, s-1)
            soused(r, s+1)

    def vzdalenost_do_sirky(self, r, s):
        fronta = deque()
        fronta.append((r, s, 0))
        #self.bludiste[r][s] = "0"

        def soused(rr, ss, dist):
            if 0 <= rr < self.radku and \
                    0 <= ss < self.sloupcu and \
                    self.bludiste[rr][ss] == '.':
                self.bludiste[rr][ss] = str(dist)
                fronta.append((rr, ss, dist))

        while fronta:
            r, s, dist = fronta.popleft()
            soused(r-1, s, dist+1)
            soused(r+1, s, dist+1)
            soused(r, s-1, dist+1)
            soused(r, s+1, dist+1)

    def najdi_poklad(self, r, s):
        fronta = deque()
        fronta.append((r, s, [(r, s)]))
        #self.bludiste[r][s] = 'o'

        def soused(rr, ss, cesta):
            if 0 <= rr < self.radku and 0 <= ss < self.sloupcu:
                if self.bludiste[rr][ss] == '.':
                    self.bludiste[rr][ss] = 'o'
                    fronta.append((rr, ss, cesta))
                elif self.bludiste[rr][ss] == '$':
                    fronta.clear()
                    for i in cesta[:-1]:
                        self.bludiste[i[0]][i[1]] = "*"

        while fronta:
            r, s, cesta = fronta.popleft()
            soused(r-1, s, cesta + [(r-1, s)])
            soused(r+1, s, cesta + [(r+1, s)])
            soused(r, s-1, cesta + [(r, s-1)])
            soused(r, s+1, cesta + [(r, s+1)])


b = Bludiste()
# b.nacti("bludiste.in")
b.nacti("bludiste.txt")
r0, s0 = b.najdi_start()
b.najdi_poklad(r0, s0)
b.vypis()
