import numpy as np
import matplotlib.pyplot as plt
import math


soubor = open("PKLM.csv", "r")
radky = [radek.strip("\n") for radek in soubor.readlines()][1:]
radky = [[float(radekList) if radekList != "" else float("NaN") for radekList in radek.split(",")[:-1]]
         for radek in radky]

dataPoLetech = []
for rok in range(1775, 2020):
    dataPoLetech.append([radek[1:] for radek in radky if radek[1] == rok])


def dataMatrixForIndex(ind, val=0.):
    dataMatrix = np.full((2020-1775, 12, 31), val)
    for radek in radky:
        datum = [int(i) for i in radek[0:3]]
        datum[0] += -1775
        datum[1] += -1
        datum[2] += -1
        datum = tuple(datum)
        data = radek[3+ind]
        dataMatrix[datum] = data

    return dataMatrix


AvgTeplota = dataMatrixForIndex(0)
RocniAvgTeplota = AvgTeplota.mean(axis=1).mean(axis=1).copy()*365/(12*31)
weight = np.array([1, 31/28, 1, 30/31, 1, 30/31, 1, 1, 30/31, 1, 30/31, 1])
MesicniAvgTeplota = AvgTeplota.mean(axis=0).mean(axis=1).copy()*weight
Brezen21 = AvgTeplota[:, 2, 20].copy()
del AvgTeplota

MaxTeplota = dataMatrixForIndex(1, -255)
RocniMaxTeplota = MaxTeplota.max(axis=1).max(axis=1).copy()
MesicniMaxTeplota = MaxTeplota.max(axis=0).max(axis=1).copy()
del MaxTeplota

MinTeplota = dataMatrixForIndex(2, 255)
RocniMinTeplota = MinTeplota.min(axis=1).min(axis=1).copy()
MesicniMinTeplota = MinTeplota.min(axis=0).min(axis=1).copy()
del MinTeplota

Srazky = dataMatrixForIndex(3)[50:, :, :]
MesicniMinSrazky = Srazky.min(axis=0).min(axis=1).copy()
MesicniMaxSrazky = Srazky.max(axis=0).max(axis=1).copy()
MesicniAvgSrazky = Srazky.mean(axis=0).mean(axis=1).copy()*weight
del Srazky


plt.rcParams.update({'font.size': 10})

mesice = ["leden", "únor", "březen", "duben", "květen", "červen",
          "červenec", "srpen", "září", "říjen", "listopad", "prosinec"]


def Graf1():
    x = np.arange(1775, 2020)

    plt.subplot(211)
    plt.title(label="Teplota napříč roky")
    plt.ylabel("Teplota / (°C)")
    plt.plot(x, RocniAvgTeplota, "g", label="Roční průměr")
    plt.plot(x, RocniMaxTeplota, "r", label="Roční maximum")
    plt.plot(x, RocniMinTeplota, "b", label="Roční minimum")
    plt.legend()

    plt.subplot(212)
    plt.ylabel("Teplota / (°C)")
    plt.plot(x, RocniAvgTeplota, "g", label="Roční průměr")
    plt.legend()

    plt.savefig("graf1.pdf")
    plt.close()


def Graf2():
    plt.subplot(211)
    plt.title(label="Teplota napříč měsíci")
    plt.ylabel("Teplota / (°C)")
    plt.plot(mesice, MesicniAvgTeplota, "g", label="Měsíční průměr")
    plt.plot(mesice, MesicniMaxTeplota, "r", label="Měsíční maximum")
    plt.plot(mesice, MesicniMinTeplota, "b", label="Měsíční minimum")
    plt.xticks(rotation=15)
    plt.legend()

    plt.subplot(212)
    plt.ylabel("Teplota / (°C)")
    plt.plot(mesice, MesicniAvgTeplota, "g", label="Měsíční průměr")
    plt.xticks(rotation=15)
    plt.legend()

    plt.savefig("graf2.pdf")
    plt.close()


def Graf3():
    plt.subplot(211)
    plt.title(label="Srážky napříč měsíci")
    plt.ylabel("Srážky / (mm)")
    plt.xticks(rotation=15)

    plt.bar(mesice, MesicniMaxSrazky,  color="aqua",
            width=0.8, label="Měsíční maximum")
    plt.bar(mesice, MesicniAvgSrazky, color="deepskyblue",
            width=0.8, label="Měsíční průměr")
    plt.bar(mesice, MesicniMinSrazky,  color="deepskyblue",
            width=0.8, label="Měsíční minimum")
    plt.legend()

    plt.subplot(212)
    plt.ylabel("Srážky / (mm)")
    plt.bar(mesice, MesicniAvgSrazky, color="deepskyblue",
            width=0.8, label="Měsíční průměr")
    plt.xticks(rotation=15)
    plt.legend()

    plt.savefig("graf3.pdf")
    plt.close()


def Graf4():
    x = np.arange(1775, 2020)
    plt.title(label="21. březen napříč roky")
    plt.ylabel("Teplota / (°C)")
    plt.plot(x, Brezen21, "g")

    plt.savefig("graf4.pdf")
    plt.close()


Graf1()
Graf2()
Graf3()
Graf4()
