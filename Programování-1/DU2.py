vstup = int(input())
i = 2
if vstup == 1:
    print(1)
while vstup != 1:   
    if vstup % i ==0:
        vstup /= i
        print(i)
        i = 2
    else:
        i+=1