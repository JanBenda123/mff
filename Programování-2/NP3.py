import numpy as np
pocetRadku = int(input())
pocetRadku = int(input())
matrix = np.ones((pocetRadku, pocetSloupcu))
matrix *= np.linspace(1, pocetSloupcu, pocetSloupcu)
print(matrix.T.astype(int))
