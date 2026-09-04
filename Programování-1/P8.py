#n = int(input())
# vypis malou nasobilku
#seznam = [f"{a} + {b} = {a*b}" for a in range(1,n+1) for b in range(1,n+1) ]

def prunik(A,B):
    return[i for i in A for j in B if i == j]

#print(prunik([1,2,3,4,5],[2,4]))

def vyberPalindromatickaSlova(retezec):
    return [slovo for slovo in retezec.split() if all([slovo[i] == slovo[-i-1] for i in range(len(slovo))])]

#print(vyberPalindromatickaSlova("wow to ne testset pop nenenenenenenenenenenenenenenenenenenen wtftwtftwtftw"))

def skalarniSoucin(a,b):
    return sum([i*j for i, j in zip(a,b)])
    #return sum([a[i]*b[i] for i in range(len(a)) ])

#print(skalarniSoucin([10,20,30,40],[2,1,-1,0]))

def soucinMaticeVektor(A,v):
    return [skalarniSoucin(A[i],v) for i in range(len(A))]

A0=[[1,2,3],[4,5,6]]
v0=[[1],[2],[3]]
print(soucinMaticeVektor(A0,v0))