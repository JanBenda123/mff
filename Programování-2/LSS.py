class Prvek:
    def __init__(self, x):
        self.hodnota = x
        self.dalsi = None


def vypis(p):
    """ 4 -> 1 -> 10 -> 🗲"""

    while p != None:
        print(p.hodnota, end="->")
        p = p.dalsi
    print("🗲")


def pridejZepredu(a, p):
    """ 4 -> 1 -> 10 -> 🗲"""

    while p != None:
        print(p.hodnota, end="->")
        p = p.dalsi
    print("🗲")


p1 = Prvek(4)
p2 = Prvek(1)
p3 = Prvek(10)


p = p1
p1.dalsi = p2
p2.dalsi = p3

vypis(p)
