"""
Řešení soustav ODR pomocí Eulerovy metody
Jan Benda, I. ročník
letní semestr 08/2021
Programování 2 pro matematiky (NMIN112)
"""
#
# from resiciAlgoritmy import SolverEuler
from resiciAlgoritmy import SolverRK4
from prijemZpracovani import PrijemZpracovani
from plotter import Plotter
import numpy as np
import matplotlib.pyplot as plt


PZ = PrijemZpracovani()
PZ.vstupZnaceni()
PZ.vstupFunkce()
PZ.vstupProReseni()

reseni = SolverRK4(PZ.fce, PZ.pocatecniStav, PZ.rozsahPromenne,
                   PZ.nejvyssiDerivace).iteruj()

PZ.vstupProVykresleni()
PLT = Plotter()
PLT.vytvoritGraf(PZ.nastaveniGrafu)
for vykresleni in PZ.seznamVykresleni:
    PLT.pridatVykresleni(reseni[vykresleni["x"]],
                         reseni[vykresleni["y"]], vykresleni["parametry"])
PLT.vykreslitGraf()
PZ.export(reseni)
