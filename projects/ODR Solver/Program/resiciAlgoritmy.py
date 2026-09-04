"""
Tento modul provadi reseni zadane soustavy rovnic
"""
import numpy as np
import matplotlib.pyplot as plt
import math


class Solver:
    def __init__(self, fcePraveStrany, pocStav, RozsahPromenne, stupneRovnic):
        self.fcePraveStrany = fcePraveStrany
        self.stav = pocStav  # pocatecni podminky soustavy
        self.RozsahPromenne = RozsahPromenne
        self.stupneRovnic = stupneRovnic  # hodnoty nejvyssich derivaci funkci
        self.delta = 0.01  # delka kroku

    def KrokFce(self, promenna, stav):
        """Ze současného stavu vypočte následující"""
        """vrati tuple(promenna+delta, stav v (promenna + delta))"""
        pass

    def iteruj(self):
        """vrátí řešení soustavy - seznam derivací funckí a hodnot proměnných"""
        print("Probíhá výpočet. Může to chvíli trvat.")
        promenna = self.RozsahPromenne[0]
        reseni = np.append(self.stav, promenna)
        while promenna < self.RozsahPromenne[1]:
            try:
                promenna, self.stav = self.krokFce(promenna, self.stav)
                reseni = np.vstack((reseni, np.append(self.stav, promenna).T))
            except:
                print("Výpočet přerušen: výraz nedává smysl")
                break
        return reseni.T


class SolverEuler(Solver):
    def __init__(self, fcePraveStrany, pocStav, RozsahPromenne, stupneRovnic):
        super().__init__(fcePraveStrany, pocStav, RozsahPromenne, stupneRovnic)

    def krokFce(self, promenna, stav):
        """Ze současného stavu vypočte následující"""
        nejvyssiDerivace = np.array(self.fcePraveStrany(promenna, stav))
        indexStavu = 0                          # index zrovna pocitane derivace
        indexNejvyssiDerivace = 0
        for stupenRovnice in self.stupneRovnic:    # pro vsechny funkce
            for _ in range(stupenRovnice-1):    # pro vsechny derivace funkcí
                stav[indexStavu] += stav[indexStavu+1]*self.delta
                indexStavu += 1
            stav[indexStavu] += nejvyssiDerivace[indexNejvyssiDerivace]*self.delta
            indexStavu += 1
            # dojde-li k nejvyssi derivaci pripocte jeji hodnotu
            indexNejvyssiDerivace += 1
        return (promenna+self.delta, stav)


class SolverRK4(Solver):
    def __init__(self, fcePraveStrany, pocStav, RozsahPromenne, stupneRovnic):
        super().__init__(fcePraveStrany, pocStav, RozsahPromenne, stupneRovnic)

    def krokFce(self, promenna, stav):
        """Ze současného stavu vypočte následující"""
        stav = np.array(stav)
        k1 = np.array(self.fcePraveStrany(promenna, stav))
        k2 = np.array(self.fcePraveStrany(
            promenna+self.delta/2, stav+self.delta/2*k1))
        k3 = np.array(self.fcePraveStrany(
            promenna+self.delta/2, stav+self.delta/2*k2))
        k4 = np.array(self.fcePraveStrany(
            promenna+self.delta, stav+self.delta*k3))

        return (promenna+self.delta, stav+1/6*(k1+2*k2+2*k3+k4))
