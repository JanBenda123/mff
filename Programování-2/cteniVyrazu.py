import math
inp = "(y[1]+z)-z[0]*exp(x)+sin(y)"
#inp = "pi^(exp(2)-(5+2))*1.23-e"
jmenoPromenne = "x"
seznamJmenFci = ["y", "z"]
nejvyssiDerivace = [2, 1]


funcList = ["exp", "sin", "cos"]


class Uzel:
    def __init__(self, hodnota, potomci=[]):
        self.hodnota = hodnota
        self.potomci = potomci

    def __repr__(self) -> str:
        pocetPotomku = len(self.potomci)
        if pocetPotomku == 0:
            return "("+self.hodnota+")"
        elif pocetPotomku == 1:
            return "("+self.hodnota + repr(self.potomci[0]) + ")"
        elif pocetPotomku == 2:
            return "("+repr(self.potomci[0]) + self.hodnota + repr(self.potomci[1]) + ")"

    def postavKod(self):
        pocetPotomku = len(self.potomci)
        if pocetPotomku == 0:
            if self.hodnota in ("pi", "e"):
                return "(math."+self.hodnota+")"
            try:
                if type(float(self.hodnota)) is float:
                    return "("+self.hodnota+")"
            except:
                pass
            if self.hodnota == jmenoPromenne:
                return "(promenna)"
            try:

                if "[" in self.hodnota:
                    separator = self.hodnota.index("[")
                    nazevFce = self.hodnota[:separator]
                    derivace = int(self.hodnota[separator+1:-1])
                else:
                    nazevFce = self.hodnota
                    derivace = 0
                idVSeznamu = seznamJmenFci.index(nazevFce)
                poziceStavu = sum(nejvyssiDerivace[:idVSeznamu])+derivace
                return "(stav["+str(poziceStavu)+"])"
            except:
                print("chyba pri stavbe derivace fce")
                raise Exception

        elif pocetPotomku == 1:
            return "(math."+self.hodnota + self.potomci[0].postavKod() + ")"
        elif pocetPotomku == 2:
            if self.hodnota == "^":
                self.hodnota = "**"
            return "("+self.potomci[0].postavKod() + self.hodnota + self.potomci[1].postavKod() + ")"


def postavStrom(inp):  # postavi strom rekurzivne podle urovni zavorek
    urovenZanoreni = 0
    FrontaUzluVyssichUrovni = []
    vyrazVyssiUrovne = ""
    vyrazTetoUrovne = ""

    # rozdeli string na slova, cisla, operatory a podstromy ($)
    def rozdelOperatoryRek(bezZavorek, listOperatoru=[]):
        if bezZavorek == "":
            return listOperatoru
        elif bezZavorek[0] in "+-*/^$":  # zpracuje operatory a zavorky vyssich urovni
            listOperatoru.append(bezZavorek[0])
            return rozdelOperatoryRek(bezZavorek[1:], listOperatoru)
        elif bezZavorek[0].isalpha():  # zpracuje slova + pripadne derivace
            slovo = ""
            derivace = ""
            for c in bezZavorek:
                if c.isalpha():
                    slovo += c
                else:
                    break
            bezZavorek = bezZavorek[len(slovo):]
            if bezZavorek != "" and bezZavorek[0] == "[":
                for c in bezZavorek:
                    derivace += c
                    if c == "]":
                        break
            bezZavorek = bezZavorek[len(derivace):]
            listOperatoru.append(slovo+derivace)
            return rozdelOperatoryRek(bezZavorek, listOperatoru)
        elif bezZavorek[0].isdigit():
            cislo = ""
            for c in bezZavorek:
                if c.isdigit() or c == ".":
                    cislo += c
                else:
                    break
            bezZavorek = bezZavorek[len(cislo):]
            listOperatoru.append(cislo)
            return rozdelOperatoryRek(bezZavorek, listOperatoru)

    for c in inp:  # rekurzivne zpracuje zanorene zavorky
        if c == "(":
            if urovenZanoreni == 0:
                vyrazTetoUrovne += c
            else:
                vyrazVyssiUrovne += c
            urovenZanoreni += 1
        elif c == ")":
            urovenZanoreni -= 1
            if urovenZanoreni == 0:  # pokud dojdu zpet na puvodni uroven, nizsi uroven rekurzivne zpracuji
                FrontaUzluVyssichUrovni.append(postavStrom(vyrazVyssiUrovne))
                vyrazVyssiUrovne = ""
                vyrazTetoUrovne += c
            else:
                vyrazVyssiUrovne += c
        elif urovenZanoreni != 0:
            vyrazVyssiUrovne += c
        else:
            vyrazTetoUrovne += c

    # dostaneme vyraz bez zavorek + uzly zpracovanych vyssich urovni znacene $
    vyrazTetoUrovne = vyrazTetoUrovne.replace("()", "$")
    ZasobnikUzluVyssichUrovni = FrontaUzluVyssichUrovni[::-1]
    del FrontaUzluVyssichUrovni
    listOperatoru = rozdelOperatoryRek(vyrazTetoUrovne)

    # nahradi $ za prislusne uzly, prepise stringy na uzly
    for i in range(len(listOperatoru)):
        if listOperatoru[i] == "$":
            listOperatoru[i] = ZasobnikUzluVyssichUrovni.pop()
        elif not isinstance(listOperatoru[i], Uzel):
            listOperatoru[i] = Uzel(listOperatoru[i])

    funcList = ["exp", "sin", "cos"]
    temp = []
    i = 0
    while i in range(len(listOperatoru)):  # postavi uzle funkci
        if listOperatoru[i].hodnota in funcList:
            listOperatoru[i].potomci = [listOperatoru[i+1]]
            temp.append(listOperatoru[i])
            i += 1
        else:
            temp.append(listOperatoru[i])
        i += 1
    listOperatoru = temp

    for oper in ["^", "/*", "+-"]:  # postavi uzel vyrazu na vstupu
        temp = []
        i = 0
        while i in range(len(listOperatoru)):
            if listOperatoru[i].hodnota in oper and len(listOperatoru[i].potomci) == 0:
                listOperatoru[i].potomci = [
                    temp.pop(), listOperatoru[i+1]]
                temp.append(listOperatoru[i])
                i += 1
            else:
                temp.append(listOperatoru[i])
            i += 1
        listOperatoru = temp
    return listOperatoru[0]


test = postavStrom(inp)
print(test.postavKod())
# exec("print("+test.postavKod()+")")
