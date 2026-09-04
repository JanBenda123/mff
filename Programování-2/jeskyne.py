import numpy as np


def vstup():
    inp = input()
    # inp = ".###..\n...#..\n##.###\n.#....\n..####\n.#...."
    inp = inp.splitlines()
    return [list(i) for i in inp]


def probadat(neprobadanaJeskyne):
    def najdiNovouKomponentu(jeskyne):
        for i in range(len(jeskyne)):
            for j in range(len(jeskyne[i])):
                if jeskyne[i][j] == ".":
                    return (i, j)

    def prohledejOkoli(bod):
        if 0 <= bod[0] < len(neprobadanaJeskyne) and 0 <= bod[1] < len(neprobadanaJeskyne[0]):
            if neprobadanaJeskyne[bod[0]][bod[1]] == ".":
                neprobadanaJeskyne[bod[0]][bod[1]] = "-"
                suma = 1
                suma += prohledejOkoli((bod[0]+1, bod[1]))
                suma += prohledejOkoli((bod[0]-1, bod[1]))
                suma += prohledejOkoli((bod[0], bod[1]+1))
                suma += prohledejOkoli((bod[0], bod[1]-1))
                return suma
            else:
                return 0
        else:
            return 0

    seznamKomponent = []
    start = najdiNovouKomponentu(neprobadanaJeskyne)
    while start is not None:
        delka = prohledejOkoli(start)
        seznamKomponent.append((start, delka))
        start = najdiNovouKomponentu(neprobadanaJeskyne)
    return seznamKomponent


def najdiTeziste(probadanaJeskyne, startNejdelsiJeskyne):
    def prohledejOkoli(bod):
        if 0 <= bod[0] < len(probadanaJeskyne) and 0 <= bod[1] < len(probadanaJeskyne[0]):
            if neprobadanaJeskyne[bod[0]][bod[1]] == "-":
                neprobadanaJeskyne[bod[0]][bod[1]] = "+"
                suma = np.array(bod)
                suma += np.array(prohledejOkoli((bod[0]+1, bod[1])))
                suma += np.array(prohledejOkoli((bod[0]-1, bod[1])))
                suma += np.array(prohledejOkoli((bod[0], bod[1]+1)))
                suma += np.array(prohledejOkoli((bod[0], bod[1]-1)))
                return suma
            else:
                return np.array((0, 0))
        else:
            return np.array((0, 0))

    sumaSoradnic = prohledejOkoli(startNejdelsiJeskyne).tolist()
    return sumaSoradnic


neprobadanaJeskyne = vstup()
seznamKomponent = probadat(neprobadanaJeskyne)
nejdelsiKomponenta = max(seznamKomponent, key=lambda x: x[1])
sumaSouradnic = najdiTeziste(neprobadanaJeskyne, nejdelsiKomponenta[0])
print(nejdelsiKomponenta[1], sumaSouradnic[0] //
      nejdelsiKomponenta[1], sumaSouradnic[1]//nejdelsiKomponenta[1])
