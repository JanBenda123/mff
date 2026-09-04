pocetRovnic = int(input())
maticeSoustavyRowStr = [input().split(" ") for _ in range(pocetRovnic) ]
rozsirenaMaticeSoustavy = [[int(element) for element in row] for row in maticeSoustavyRowStr]



def prictiKRadku (pole, pricitanePole, nasobek):
    return  [sum(j) for j in zip(pole,[nasobek*i for i in pricitanePole])]
def vynasobRadek (pole, k):
    return [k*i for i in pole]

def gausovaEliminace(maticeSoustavyArg):
    """provede gaussovu eliminaci na matici"""
    maticeSoustavy = maticeSoustavyArg
    for i in range(pocetRovnic):
        if maticeSoustavy[i][i] == 0: # vymena radku pro 0 na diag
            for j in range(i+1, pocetRovnic):
                if maticeSoustavy[j][i] != 0:
                    maticeSoustavy[j],maticeSoustavy[i] = maticeSoustavy[i],maticeSoustavy[j]
                    break

        for j in range(i+1, pocetRovnic):
            konst = -1*maticeSoustavy[j][i]/maticeSoustavy[i][i]
            maticeSoustavy[j] = prictiKRadku(maticeSoustavy[j],maticeSoustavy[i],konst)
    return maticeSoustavy

def matrixFlip(maticeSoustavyArg):
    """Převrátí matici soustavy podle os y a x"""
    maticeSoustavy = maticeSoustavyArg
    for i in range(0,len(maticeSoustavy)//2):
        maticeSoustavy[i],maticeSoustavy[-1-i] = maticeSoustavy[-1-i],maticeSoustavy[i]
    
    for row in maticeSoustavy:
        for i in range(0,(len(row)-1)//2):
            row[i],row[-2-i] = row[-2-i],row[i]
    return maticeSoustavy

def normalize(aVstup):
    a = aVstup
    for i in range(0,len(a)):
        a[i] = vynasobRadek(a[i],1/a[i][i]) 
    return a

a = gausovaEliminace(rozsirenaMaticeSoustavy)
a = matrixFlip(a)
a = gausovaEliminace(a)
a = matrixFlip(a)
vyresenaMatice = normalize(a)

floatReseni = [float(round(row[-1])) for row in vyresenaMatice]
[print(_) for _ in floatReseni]
