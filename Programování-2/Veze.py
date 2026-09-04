def inp():
    N = int(input())
    sachovnice = []
    for _ in range(N):
        sachovnice.append(input())
    return sachovnice


def spoctiVeze(sachovnice):
    suma = 0
    if sachovnice == ["."]:
        return 1
    else:
        maVolnaPolicka = ["." in i for i in sachovnice]
        maVolnaPolicka = all(maVolnaPolicka)  # kazdy radek musi mit volne pole
        if maVolnaPolicka:
            for i in range(len(sachovnice[0])):
                if sachovnice[0][i] != "X":
                    # provedu rez sachovnici
                    novaSachovnice = sachovnice[1:]
                    novaSachovnice = [j[:i]+j[i+1:] for j in novaSachovnice]
                    suma += spoctiVeze(novaSachovnice)
            return suma
        return 0


sachovnice = inp()
print(spoctiVeze(sachovnice))
