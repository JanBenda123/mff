class Rect:
    def __init__(self,x1,y1,x2,y2):
        self.x1 = x1
        self.y1 = y1
        self.x2 = x2
        self.y2 = y2
        self.a = abs(self.x1-self.x2)
        self.b = abs(self.y1-self.y2)

    def __repr__(self):
        return(f"Rect({self.x1},{self.y1},{self.x2},{self.y2})")

    def perimeter(self):
        return 2*(self.a+self.b)
    def area(self):
        return self.a*self.b

    def __eq__(self, other):
        pointset1 = set(((self.x1,self.y1),(self.x2,self.y2)))
        pointset2 = set(((other.x1,other.y1),(other.x2,other.y2)))
        return pointset1 == pointset2

    def doesContain(self, px,py):
        if min(self.x1,self.x2) <= px <= max(self.x1,self.x2):
            if min(self.y1,self.y2) <= py <=max(self.y1,self.y2):
                return True
        return False
    
    def __contains__(self, other):
        return (self.doesContain(other.x1,other.y1) and self.doesContain(other.x2,other.y2))
        
     
    def __and__(self, other):
        if other in self:
            return other
        elif (self.doesContain(other.x1,other.y1) ^ self.doesContain(other.x2,other.y2)):
            return Rect(min(self.x2, other.x1),min(self.y2, other.y1),max(self.x2, other.x1),max(self.y2, other.y1))
        else:
            return Rect(0,0,0,0)




        




