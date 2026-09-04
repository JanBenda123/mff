class Strom():
    def __init__(self, info, levy=None, pravy=None):
        self.info = info
        self.levy = levy
        self.pravy = pravy

    def __str__(self):
        levystr = ""
        pravystr = ""
        if self.levy is not None:
            levystr = str(self.levy)
        if self.pravy is not None:
            pravystr = str(self.pravy)
        return "("+levystr + str(self.info) + pravystr+")"

    def eval(self):
        if self.info == "*":
            return self.levy.eval()*self.pravy.eval()
        if self.info == "+":
            return self.levy.eval()+self.pravy.eval()
        if self.info == "-":
            return self.levy.eval()-self.pravy.eval()
        if type(self.info) == int:
            return self.info


strom = Strom("+", Strom("*", Strom(3), Strom(5)),
              Strom("-", Strom(5), Strom(6)))
print(strom.eval())
