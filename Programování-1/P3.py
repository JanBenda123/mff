#N = int(input())


def Fib(n):
    fib=[1,1]


    while len(fib) < n:
        fib.append(fib[-2]+fib[-1])
    print(fib)

def EratostenovoSito(n):
    sito = [True]*(n+1)
    sito[0] = False
    sito[1] = False
    for a in range(n+1):
        if sito[a]:
            print(a)
            for b in range(a,n+1,a):
                sito[b] = False

def U3():
    firstMax = 0
    firstMaxPos = 0
    secMax = 0
    secMaxPos = 0
    i = 1
    while True:
        n = int(input())
        if n == -1:
            print(firstMax)
            print(secMax)
            print(secMaxPos)
            break
        if firstMax<n:            
            firstMax = n
            firstMaxPos = i
        elif secMax < n:
            secMax = n
            secMaxPos = i
        i += 1
        


U3()





