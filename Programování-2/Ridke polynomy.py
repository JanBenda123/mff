from fractions import Fraction as F


def listen():
    p = []
    while True:
        i = input()
        if i == "-1 -1":
            break
        j = i.split(" ")
        p.append((int(j[0]), int(j[1])))
    return p


class RP:
    def __init__(self, p):
        self.p = [(i[0], F(i[1])) for i in p]

    def contract(self):
        if self.p == [(0, 0)]:
            return (0, 0)
        pResult = []
        for i in self.p:
            if i[1] != 0:
                pResult.append(i)
        return RP(pResult)

    def stupen(self):
        return self.p[0][0]

    def __add__(self, other):
        p1, p2 = self.p, other.p
        ind1, ind2 = 0, 0
        pVystup = []
        l1, l2 = len(p1), len(p2)
        while ind1 < l1 and ind2 < l2:
            if p1[ind1][0] > p2[ind2][0]:
                pVystup.append(p1[ind1])
                ind1 += 1
            elif p2[ind2][0] > p1[ind1][0]:
                pVystup.append(p2[ind2])
                ind2 += 1
            elif p2[ind2][0] == p1[ind1][0]:
                pVystup.append((p1[ind1][0], p1[ind1][1]+p2[ind2][1]))
                ind2 += 1
                ind1 += 1

        if ind1 == l1 and ind2 != l2:
            pVystup += p2[ind2:]
        elif ind2 == l2 and ind1 != l1:
            pVystup += p1[ind1:]
        return RP(pVystup).contract()

    def __mul__(self, other):
        p1, p2 = self.p, other.p
        scitance = []
        for i in p2:
            tempP = [(j[0]+i[0], j[1]*i[1]) for j in p1]
            scitance.append(RP(tempP))
        soucet = RP([(0, 0)])
        for p in scitance:
            soucet = soucet+p
        if soucet.p[-1] == (0, 0):
            soucet.p.pop()
        return soucet.contract()

    def __sub__(self, other):
        return (self + (other*RP([(0, -1)]))).contract()

    def __repr__(self):
        if self.p == [(0, 0)]:
            print(-1, -1)
            return""
        for i in self.p:
            print(i[0], i[1])
        print(-1, -1)
        return ""

    def __truediv__(self, other):
        podil = RP([(0, 0)])
        temp = self
        while temp.stupen() >= other.stupen():
            stupen = temp.stupen() - other.stupen()
            coef = temp.p[0][1]/other.p[0][1]
            p = RP([(stupen, coef)])
            podil += p
            temp -= p*other
        return podil, temp

    def der(self, order=1):
        if order > 0:
            return RP([(i[0]-1, i[1]*i[0]) for i in self.p if i[0] > 0]).der(order-1)
        else:
            return self

    def eval(self, val):
        tempVal = 0
        p = self.p
        l = len(p)
        for i in range(l-1):
            tempVal += p[i][1]
            tempVal *= val**(p[i][0]-p[i+1][0])
        tempVal += p[l-1][1]
        tempVal *= val**p[l-1][0]
        return tempVal

    def findRootNewton(self, start, i):
        s = start
        d0 = self
        d1 = self.der()
        while i > 0:
            s = s-d0.eval(s)/d1.eval(s)
            i -= 1
        return float(s)

    def findRootHalley(self, start, i):
        # Halleyova metoda
        s = start
        d0 = self
        d1 = self.der()
        d2 = self.der(2)
        while i > 0:
            s0 = d0.eval(s)
            s1 = d1.eval(s)
            s2 = d2.eval(s)
            s = s-2*s0*s1/(2*s1**2-s0*s2)
            i -= 1
        return float(s)


a = RP([(2, 1), (0, -2)])
# b = RP([(3, 1), (2, 1), (0, 1)])
print(a.findRootNewton(10, 5))
print(a.findRootHalley(10, 5))
print(2**0.5)
