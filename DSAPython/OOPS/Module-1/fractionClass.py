class Fraction:
    def __init__(self,num = 0,den = 1):
        if den == 0:
            den = 1
        self.num = num
        self.den = den

    def print(self): 
        if self.num == 0 :
            print(0)
        elif self.den == 1:
            print(self.num)
        else:
            print(f"{self.num}/{self.den}")

    def simplify(self):
        if self.num == 0:
            self.den = 1
            return
        current = min(self.num,self.den)
        while(current > 1):
            if self.num % current == 0 and self.den % current == 0:
                break
            current -= 1
        self.num = self.num // current
        self.den = self.den // current

f1 = Fraction(14,6)
print(f1.__dict__)

f2 = Fraction(0,3)
f3 = Fraction(5,1)

f1.print()
f1.simplify()
f1.print()

f2.print()
f3.print()