"""
Tento modul vytvoří ze stringového zápisu výrazový strom funkce, který následně přetvoří na kódovou reprezentaci této funkce v Pythonu
"""


class StavitelStromu:  # zapouzderni souboru
    def __init__(self, vstupVyrazStr, jmenoPromenne, seznamJmenFci, nejvyssiDerivace):
        self.funcList = ["exp", "sin", "cos", "tan", "asin", "acos", "atan", "sinh",
                         "cosh", "tanh", "asinh", "acosh", "atanh", "erf", "gamma", "log", "sqrt"]
        self.jmenoPromenne = jmenoPromenne
        self.seznamJmenFci = seznamJmenFci
        self.nejvyssiDerivace = nejvyssiDerivace
        self.vstupVyrazStr = vstupVyrazStr  # stringovy prepis funkce
        self.koren = Uzel(None)

    def postavStrom(self, inp=None):  # postavi strom rekurzivne podle urovni zavorek
        if inp == None:
            inp = self.vstupVyrazStr
        urovenZanoreni = 0
        FrontaUzluVyssichUrovni = []
        vyrazVyssiUrovne = ""
        vyrazTetoUrovne = ""

        # rozdeli string na slova, cisla, operatory a podstromy ($)
        def rozdelOperatoryRek(bezZavorek, listOperatoru=[]):
            if bezZavorek == "":  # ukonci rekurzi
                return listOperatoru
            elif bezZavorek[0] in "+-*/^$":  # zpracuje operatory a zavorky vyssich urovni
                listOperatoru.append(bezZavorek[0])
                return rozdelOperatoryRek(bezZavorek[1:], listOperatoru)
            elif bezZavorek[0].isalpha():  # zpracuje slova + pripadne derivace
                slovo = ""
                derivace = ""
                for c in bezZavorek:
                    if c.isalnum():
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
            elif bezZavorek[0].isdigit():  # zpracuje cisla
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
                    FrontaUzluVyssichUrovni.append(
                        self.postavStrom(vyrazVyssiUrovne))
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

        temp = []
        i = 0
        while i in range(len(listOperatoru)):  # postavi uzle funkci
            if listOperatoru[i].hodnota in self.funcList:
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
                    # osetri neoperatorove znamenkove +-
                    if oper == "+-" and len(temp) == 0:
                        listOperatoru[i].potomci = [
                            Uzel("0"), listOperatoru[i+1]]
                        temp.append(listOperatoru[i])
                    else:
                        listOperatoru[i].potomci = [
                            temp.pop(), listOperatoru[i+1]]
                        temp.append(listOperatoru[i])
                    i += 1
                else:
                    temp.append(listOperatoru[i])
                i += 1
            listOperatoru = temp
        self.koren = listOperatoru[0]
        return listOperatoru[0]

    def vygenerujKod(self):  # sestavi pythoni kod, vygeneruje fci, kterou vrati
        return self.koren.postavKod(self.jmenoPromenne, self.seznamJmenFci, self.nejvyssiDerivace)


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

    # postavi ze stromu rekurzivne Pythoni kod
    def postavKod(self, jmenoPromenne, seznamJmenFci, nejvyssiDerivace):
        args = list(locals().values())[1:]
        pocetPotomku = len(self.potomci)
        if pocetPotomku == 0:
            if self.hodnota in ("pi", "e", "tau"):  # specialni hodnoty
                return "(math."+self.hodnota+")"
            try:
                if type(float(self.hodnota)) is float:  # ciselne typy
                    return "("+self.hodnota+")"
            except:
                pass
            if self.hodnota == jmenoPromenne:  # parsing promenne
                return "(promenna)"
            try:
                if "[" in self.hodnota:  # priradi spravnou pozici v listu stav derivaci dane fce
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

        elif pocetPotomku == 1:  # parsuje fce
            return "(math."+self.hodnota + self.potomci[0].postavKod(*args) + ")"
        elif pocetPotomku == 2:  # parsuje operatory
            if self.hodnota == "^":
                self.hodnota = "**"
            return "("+self.potomci[0].postavKod(*args) + self.hodnota + self.potomci[1].postavKod(*args) + ")"
