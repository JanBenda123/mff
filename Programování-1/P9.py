from collections import defaultdict

def porovnaPrvky1(a,b):
    return set(a) == set(b)

def porovnaPrvky2(a,b):
    A,B = defaultdict(int),defaultdict(int) 
    for i in a:
        A[i] += 1
    for i in b:
        B[i] += 1
    return A == B

def MaPrvkyRuzne(a):
     return len(a)>len(set(a)) 

def kGramy():
    kGram = defaultdict(int)
    string = "" 
    for radek in open('pes.txt', encoding='utf-8'):
        string += radek + " "

    for i in range(0, len(string)-2):
        kGram[string[i:i+2]] += 1

    return kGram

print(kGramy())