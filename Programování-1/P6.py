def minimum(a,b,c):
    if a < b:
        if a < c:
            return a
        elif a > c:
            return c
    return b
def fib(iter, a = 1, b = 1):
    if iter == 0:
        return a
    return fib(iter - 1, b, a+b)

def pocetSudych(a):
    pocet = 0 
    for x in a:
        pocet += 1-x%2
    return pocet

def vratitSude(a):
    sude = []
    for x in a:
        if x%2 == 0:
            sude.append(x)        
    return sude

def prunikSeznamu(a,b):
    prunik = []
    i,j = 0,0
    while i < len(a) and j < len(b):
        if a[i] == b[j]:
            prunik.append(a[i])
            i += 1
            j += 1
        elif a[i] > b[j]:
            j += 1
        else :
            i += 1
    return prunik

print(prunikSeznamu([1,2,3,4,5,6,7,8],[2,4,6,7,8,9,10]))


