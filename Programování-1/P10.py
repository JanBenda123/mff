zaznamy = ["Miroslav Janča","Pavel Malý","Roman Malý","Irena Novotná","Roman Ročák",
           "Jitka Murinová", "Matěj Krejčí","Jiří Neveselý","Tomáš Havelka"]
#nejdelsi prijmeni
#print(max(zaznamy, key = lambda x:(len(x.split()[1]))))
#print(sorted(zaznamy, key = lambda x:(x.split()[1],x.split()[0])))

#print(list(map(lambda x: x.split()[1] +" "+ x.split()[0],zaznamy)))

def red(seznam, fce):
    if len(seznam) == 1:
        return seznam[0]
    temp = seznam[0]
    for i in range(1, len(seznam)):
        temp = fce(temp, seznam[i])
    return temp

print(red([1]*100,lambda x,y: x+y))