import numpy as np
pocetRadku = int(input())
pocetSloupcu = int(input())


def ityRadekI(pocetSloupcu, pocetRadku):
    matrix = np.ones((pocetRadku, pocetSloupcu))
    matrix *= np.linspace(1, pocetSloupcu, pocetSloupcu)
    return (matrix.T.astype(int))


m1 = ityRadekI(pocetRadku, pocetSloupcu)
m2 = ityRadekI(pocetSloupcu, pocetRadku).T

print(np.logical_not((m1 % m2).astype(bool)))
