vstup = []
while True:
    inp = int(input())
    if inp == -1:
        break
    vstup.append(inp)
kthBiggest = int(input())

#isSorted = False
lght = len(vstup)
iteration = 0
while iteration < kthBiggest:
    #isSorted = True
    for i in range(0, lght - 1):
        if vstup[i] > vstup[i+1]:
            vstup[i],vstup[i+1] = vstup[i+1],vstup[i]
            #isSorted = False
    iteration += 1


print(vstup[-kthBiggest])
