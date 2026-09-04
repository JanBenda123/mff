import random as r
import numpy as np


def genRand(n):
    matice = []
    for i in range(n):
        string = []
        for j in range(n):
            string.append(r.choice([".", "x"]))
        matice.append(string)
    return matice


def eliminate(matrix):
    [print(r)for r in matrix]
    print()
    matrix = sorted(matrix, key=lambda x: x.count("x"))
    [print(r)for r in matrix]
    print()
    matrix = np.array(matrix).T.tolist()
    [print(r)for r in matrix]
    print()
    matrix = sorted(matrix, key=lambda x: x.count("x"))
    [print(r)for r in matrix]
    print()


m = genRand(5)
eliminate(m)
