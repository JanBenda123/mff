from math import sqrt
def uloha1(a): #primetest
    vstup = int(input())

    cap = sqrt(vstup)

    i = 2
    while i < cap:
        if vstup % i == 0:
            print(str(i) + " dělí " + str(vstup))
            break
        i+=1
    else:
        print(str(vstup)+ " je prvočíslo")

def uloha2():
    sum = 0
    while True:
        vstup = int(input())
        if vstup == -1:
            print(sum)
            break
        sum *= 10
        sum += vstup

def primetest(ar): #primetest
    cap = sqrt(ar)
    i = 2
    while i <= cap:
        if ar % i == 0:
            break
        i+=1
    else:
        return True
    return False

def uloha3():
    vstup = int(input())
    i = 2
    while i < vstup:
        if(primetest(i)):
            print(i)
        i += 1

def gcd(a,b):
    if a%b == 0:
        print(b)
        return
    gcd(b,a%b)

def uloha4():
    a = int(input())
    b = int(input())
    gcd(a,b)

uloha4()





