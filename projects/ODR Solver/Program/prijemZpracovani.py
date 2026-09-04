from cteniVyrazu import StavitelStromu
import keyword
import math
"""
Tento modul zpracovává veškerý vstup zadaný uživatelem. Zpracování zahrnuje příjem, ošetření neplatných vstupů, Vytváření Pythoních funkcí ze stringového kodu, export dat
"""


def obsahujeChybuJmena(seznamJmenFunkci, jmenoPromenne):  # kontrola chyboveho vstupu
    seznamJmen = seznamJmenFunkci+[jmenoPromenne]
    zakazaneZnaky = "\"$,.}{,+-*\/[]():;"
    zakazanaSlova = ["math", "os", "system", "math",
                     "e", "pi", "tau"]+StavitelStromu(1, 1, 1, 1).funcList
    spojenySeznamJmen = "".join(seznamJmen)
    if "" in seznamJmen:
        print("Chyba: Nevyplnili jste všechny položky")
        return 1
    if len(seznamJmen) != len(set(seznamJmen)):  # kontrola duplicit
        print("Chyba: Vyskytla se duplicita jmen")
        return True
    if any([(nazevFce[0] in "0123456789") for nazevFce in seznamJmen]):  # nezacina na cislici
        print("Chyba: funkce nebo proměnná začíná na číslo")
        return True
    for znak in zakazaneZnaky:
        if znak in spojenySeznamJmen:
            print("Chyba: vstup obsahuje zakazané znaky")
            return True
    for jmeno in seznamJmen:
        for slovo in zakazanaSlova:
            if jmeno == slovo:
                print("Chyba: použili jste zakázané slovo")
                return True
        if keyword.iskeyword(jmeno):
            print("Chyba: použili jste klíčové slovo")
            return True


class PrijemZpracovani:
    def __init__(self):
        pass

    def vstupZnaceni(self):  # prijem nazvu promenne, fci, stupnu fci
        opakuj = True
        jmenoPromenne, seznamJmenFunkci, nejvyssiDerivace = "", "", []
        while opakuj:  # prijem nazvu promenne a fci
            jmenoPromenne = input("Zadejte název proměnné:\n").strip()
            seznamJmenFunkci = input("Zadejte názvy funkcí:\n").split(" ")
            if obsahujeChybuJmena(seznamJmenFunkci, jmenoPromenne):
                continue
            else:
                opakuj = False

        opakuj = True
        while opakuj:  # prijem stupnu derivace
            try:
                nejvyssiDerivace = [int(i) for i in input(
                    "Zadejte nejvyšši stupně derivaci:\n").split(" ")]
                if len(seznamJmenFunkci) != len(nejvyssiDerivace):  # kontrola uplnosti zadani
                    print("Chyba: Zadán špatný počet stupňů")
                    continue
                if any([i <= 0 for i in nejvyssiDerivace]):  # pouze kladna cela cisla
                    print("Chyba: nekladné číslo na vstupu")
                    continue
                opakuj = False
            except:
                print("Chyba: stupně zadány ve špatném formátu")
                pass

        self.jmenoPromenne = jmenoPromenne
        self.seznamJmenFunkci = seznamJmenFunkci
        self.nejvyssiDerivace = nejvyssiDerivace

    def vytvorFci(self, kodovePrepisy):  # vytvori z prepisu fci
        fce = None
        kod = "def vypocetNejvyssichDerivaci(promenna, stav):\n\treturn (["
        for prepis in kodovePrepisy:
            kod += prepis+","
        # [:-1]odstrani posledni carku
        kod = kod[:-1]+"])\nfce=vypocetNejvyssichDerivaci"
        ldic = locals()
        exec(kod, globals(), ldic)
        fce = ldic["fce"]
        return fce

    def najdiIndexStavu(self, vstup):
        if vstup == self.jmenoPromenne:
            return -1
        if "[" in vstup:
            nazevFce, derivace = vstup.split("[")
            indexVSeznamuFci = self.seznamJmenFunkci.index(nazevFce)
            derivace = int(derivace[:-1])
            if derivace < 0 or derivace >= self.nejvyssiDerivace[indexVSeznamuFci]:
                print("Chyba: Zadána neplatná hodnota derivace")
                raise Exception
            return sum(self.nejvyssiDerivace[:indexVSeznamuFci]) + derivace
        else:
            if vstup in self.seznamJmenFunkci:
                return sum(self.nejvyssiDerivace[:self.seznamJmenFunkci.index(vstup)])
            else:
                print("Chyba: Zadání je ve špatném formátu")
                raise Exception

    def vstupFunkce(self):  # prijem funkcnich prepisu
        kodovePrepisy = []
        for i in range(len(self.seznamJmenFunkci)):  # nacte prepisy fci a vytvory kod
            opakuj = True
            while opakuj:
                try:
                    fce = input("Zadejte přepis\n" +
                                self.seznamJmenFunkci[i]+"["+str(self.nejvyssiDerivace[i])+"] = ")
                    strom = StavitelStromu(
                        fce, self.jmenoPromenne, self.seznamJmenFunkci, self.nejvyssiDerivace)
                    strom.postavStrom()
                    kod = strom.vygenerujKod()
                    kodovePrepisy.append(kod)
                    opakuj = False
                except:
                    print("Chyba při zpracovávání")
        self.fce = self.vytvorFci(kodovePrepisy)

    def vstupProReseni(self):  # prijem parametru reseni
        self.rozsahPromenne = (0, 0)
        self.pocatecniStav = []
        while True:
            try:
                inp = [float(i) for i in input(
                    "Zadejte definiční obor řešení:\n").split(" ")]
                if len(inp) == 1:
                    self.rozsahPromenne = [0]+inp
                elif len(inp) == 2:
                    self.rozsahPromenne = inp
                else:
                    raise Exception
                break
            except:
                print("Chyba: Zadáno ve špatném formátu")
        for i in range(len(self.seznamJmenFunkci)):
            while True:
                try:
                    pocStav = [float(i) for i in input(
                        f"Zadejte počáteční stav funkce {self.seznamJmenFunkci[i]} ({self.nejvyssiDerivace[i]}. řádu):\n").split(" ")]
                    if len(pocStav) != self.nejvyssiDerivace[i]:
                        raise Exception
                    self.pocatecniStav += pocStav
                    break
                except:
                    print("Chyba: Zadáno ve špatném formátu")

    def vstupProVykresleni(self):  # prijem parametru vykresleni
        def zpracujNaSlovnik(string):  # vytvori ze stringu slovnik
            if string.strip() == "":
                return {}
            seznamPolozek = string.split(",")
            seznamPolozek = [polozka.split(":") for polozka in seznamPolozek]
            slovnik = {}
            for polozka in seznamPolozek:
                klic, hodnota = polozka[0].strip(), polozka[1].strip()
                slovnik[klic] = hodnota
            return slovnik

        while True:  # prijem parametru grafu
            try:
                nastaveniGrafuStr = input(
                    "Zadejte parametry grafu:\n")
                self.nastaveniGrafu = zpracujNaSlovnik(nastaveniGrafuStr)
                break
            except:
                print("Chyba: Špatný formát zadání")

        self.seznamVykresleni = []  # obsahuje slovniky s klici x,y,parametry
        while True:  # prijem formatu a parametru
            try:
                nastaveniVykresleniStr = input(
                    "Zadejte formát a parametry vykreslení (pro vytvoření grafu odešlete prázdný vstup):\n")
                if nastaveniVykresleniStr == "":  # podnimka ukonceni smycky pro zadani vykresleni
                    if self.seznamVykresleni == []:
                        print("Chyba: zadejte alespoň jedno vykreslení")
                    else:
                        break
                else:
                    nastVykList = nastaveniVykresleniStr.split(" ", 2)
                    xData = self.najdiIndexStavu(nastVykList[0])
                    yData = self.najdiIndexStavu(nastVykList[1])
                    param = {}
                    if len(nastVykList) == 3:
                        param = zpracujNaSlovnik(nastVykList[2])
                    slovnikTemp = {"x": xData, "y": yData, "parametry": param}
                    self.seznamVykresleni.append(slovnikTemp)
            except:
                print("Chyba: Špatný formát zadání")

    def export(self, data):  # export vypoctenych dat
        chciExport = input(
            "Chcete data exportovat do textového souboru?\n")
        if chciExport.strip() not in ["ano", "Ano", "y", "1", "True", "true"]:
            return False
        jmenoSouboru = input("Zadejte jméno souboru:\n")
        soubor = open(jmenoSouboru, "w")
        data = data.T

        hlavicka = self.jmenoPromenne+" "
        for i in range(len(self.seznamJmenFunkci)):
            for j in range(self.nejvyssiDerivace[i]):
                hlavicka += self.seznamJmenFunkci[i]+"["+str(j) + "] "
        hlavicka = hlavicka[:-1]+"\n"
        soubor.write(hlavicka)
        for radek in data:
            soubor.write(str(radek[-1])+" ")
            for polozka in radek[:-1]:
                soubor.write(str(polozka)+" ")
            soubor.write("\n")
        soubor.close()
        return True
