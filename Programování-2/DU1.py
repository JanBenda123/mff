inp = [int(i) for i in input().split()]
baze = inp[0]
cislo10 = inp[1]


def preved(cislo10, baze):
    if cislo10 == 0:
        return "0"
    absCislo10 = (-cislo10, cislo10)[cislo10 > 0]
    znamenko = cislo10/absCislo10
    cifry = ""
    abeceda = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"

    while absCislo10 > 0:
        cifry += abeceda[absCislo10 % baze]
        absCislo10 //= baze
    cifry = cifry[::-1]
    if znamenko == -1:
        cifry = "-"+cifry
    return cifry


print(preved(cislo10, baze))
