def vnoreneZavorky(uroven, zav="", zbyvajici=(None)):
    if zbyvajici == (None):
        vnoreneZavorky(uroven, "", (uroven, uroven))
    else:
        if zbyvajici[0] > zbyvajici[1]:
            return
        if zbyvajici[0] > 0:
            vnoreneZavorky(uroven, zav+"(", (zbyvajici[0]-1, zbyvajici[1]))
        if zbyvajici[1] > 0:
            vnoreneZavorky(uroven, zav+")", (zbyvajici[0], zbyvajici[1]-1))
        if zbyvajici == (0, 0):
            print(zav)


soucet = 0


def spocitejVnoreneZavorky(n):
    global soucet

    def vnoreneZavorky(uroven, zav="", zbyvajici=(None)):
        global soucet
        if zbyvajici == (None):
            vnoreneZavorky(uroven, "", (uroven, uroven))
        else:
            if zbyvajici[0] > zbyvajici[1]:
                return
            if zbyvajici[0] > 0:
                vnoreneZavorky(uroven, zav+"(", (zbyvajici[0]-1, zbyvajici[1]))
            if zbyvajici[1] > 0:
                vnoreneZavorky(uroven, zav+")", (zbyvajici[0], zbyvajici[1]-1))
            if zbyvajici == (0, 0):
                soucet += 1
    vnoreneZavorky(n)
    return soucet


def hvezdicky(n, i=1):
    print("*"*i)
    if i <= n:
        hvezdicky(n, i+1)
    print("*"*i)


def i_kratsi_rostouci(n, k, string=""):
    if string == "":
        for i in range(1, k+1):
            i_kratsi_rostouci(n-1, k, str(i)+string)
    elif string[0] == "1" or n == 0:
        print(string)
    else:
        for i in range(1, k+1):
            if int(string[0]) > i:
                i_kratsi_rostouci(n-1, k, str(i)+string)


for l in range(16):
    print(l, spocitejVnoreneZavorky(l))
