def vytiskni(array):
    string = ""
    for i in array:
        string += str(i)+" "
    string = string[0:-1]
    print(string)


def vypisPosloupnosti(n, k, posl=[]):
    if posl == []:
        for i in range(1, k+1):
            vypisPosloupnosti(n-1, k, [i]+posl)
    elif posl[0] == 1 or n == 0:
        vytiskni(posl)
    else:
        vytiskni(posl)
        for i in range(1, posl[0]):
            vypisPosloupnosti(n-1, k, [i]+posl)


vstup = int(input())
vypisPosloupnosti(vstup, vstup)
