"""
Modul má na starosti zpracovánía nastavení parametrů grafu a vykreslení dat do něho
"""
import numpy as np
import matplotlib.pyplot as plt


class Plotter:
    def __init__(self):
        pass

    # pripravi graf, doplni nezadane parametry
    def vytvoritGraf(self, parametryGrafu=dict({})):
        self.polar = False
        self.ukazLegend = False

        def toBool(string):
            if string in ["True", "true", "ano", "1", "y"]:
                return True
            return False

        if "nazev" in parametryGrafu.keys():
            plt.title(parametryGrafu["nazev"])
        if "popisX" in parametryGrafu.keys():
            plt.xlabel(parametryGrafu["popisX"])
        if "popisY" in parametryGrafu.keys():
            plt.ylabel(parametryGrafu["popisY"])
        if "stejneOsy" in parametryGrafu.keys() and toBool(parametryGrafu["stejneOsy"]):
            # plt.axis('square')
            plt.gca().set_aspect('equal', adjustable='box')
        if "polar" in parametryGrafu.keys() and toBool(parametryGrafu["polar"]):
            self.polar = True
        if "xkcd" in parametryGrafu.keys() and toBool(parametryGrafu["xkcd"]):
            plt.xkcd()

    # zakresli vykresleni do grofu
    def pridatVykresleni(self, xData, yData, parametryVykresleni=dict({})):
        if "styl" not in parametryVykresleni.keys():
            parametryVykresleni["styl"] = "black"
        if "popis" not in parametryVykresleni.keys():
            parametryVykresleni["popis"] = ""
        else:
            self.ukazLegend = True
        if self.polar:
            plt.polar(
                xData, yData, parametryVykresleni["styl"], label=parametryVykresleni["popis"])
        else:
            plt.plot(
                xData, yData, parametryVykresleni["styl"], label=parametryVykresleni["popis"])

    def vykreslitGraf(self):  # Zobrazi graf
        if self.ukazLegend:
            plt.legend()
        plt.show()
