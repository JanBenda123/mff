import numpy as np
R = int(input())
S = int(input())

verticalOnes = np.ones((1, S), dtype="int8")
if S == 1:
    print(np.ones((R, 1), dtype="int8"))

elif R == 1:
    print(verticalOnes)
else:
    horizontalOnes = np.ones((R-2, 1), dtype="int8")

    middleZeroes = np.zeros((R-2, S-2), dtype="int8")
    middleMatrix = np.hstack((horizontalOnes, middleZeroes, horizontalOnes))
    finalMatrix = np.vstack((verticalOnes, middleMatrix, verticalOnes))
    print(finalMatrix)
