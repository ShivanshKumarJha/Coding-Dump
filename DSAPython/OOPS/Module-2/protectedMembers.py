# protected variables : _maxSpeed are accessible in the derived class and also outside the class. But it is a convention to not access the protected variables outside the class and not to modify them.

class Vehicle:
    def __init__(self,color,maxSpeed):
        self.color = color
        self._maxSpeed = maxSpeed
    
    def getMaxSpeed(self):
        return self._maxSpeed
    
    def setMaxSpeed(self,maxSpeed):
        self._maxSpeed = maxSpeed

    def print(self):
        print(f"Color: {self.color}")
        print(f"MaxSpeed: {self._maxSpeed}")


class Car(Vehicle):
    def __init__(self, color, maxSpeed, numGears, isConvertible):
        super().__init__(color, maxSpeed)
        self.numGears = numGears
        self.isConvertible = isConvertible

    def print(self):
        super().print()
        print(f"NumGears: {self.numGears}")
        print(f"IsConvertible: {self.isConvertible}")


c = Car("red", 15, 3, False)
c.print()
print()

v = Vehicle("red", 18)
v.print()