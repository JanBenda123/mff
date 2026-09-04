akce = ["vstat", "cvicit", "sprcha", "oblect se", "uvarit caj", "udelat snidani",
        "snidat", "vycicstit zuby", "zapnout pocitac", "prihlasit se", "prednaska", "zapnout Zoom"]
hrany = [[0]*len(akce) for i in range(len(akce))]
for i in range(1, len(akce)):
    hrany[0][i] = 1
hrany[1][2] = 1
hrany[1][6] = 1
hrany[2][3] = 1
hrany[3][10] = 1
hrany[4][6] = 1
hrany[5][6] = 1
hrany[6][7] = 1
hrany[8][9] = 1
hrany[9][11] = 1
hrany[11][10] = 1
hrany[7][10] = 1


def prvkybezPredku(hrany):
    seznamHran = []
    for i in range(len(hrany)):
        if all([(True, False)[j[i]] for j in hrany]):
            seznamHran.append(i)
    return seznamHran


def najdiUsp(hrany, str=""):
    seznamHran = prvkybezPredku(hrany)
    if seznamHran == []:
        print(str)
        f.write(str[:-1]+"\n")
    else:
        for i in seznamHran:
            newSeznamHran = hrany.copy()
            newSeznamHran[i] = [0]*len(akce)
            newSeznamHran[i][i] = 1
            najdiUsp(newSeznamHran, str+akce[i]+", ")


f = open("rano.txt", "w")

print("start")
najdiUsp(hrany)
f.close()
