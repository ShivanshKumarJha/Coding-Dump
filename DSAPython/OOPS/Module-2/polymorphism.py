class Vehicle:
    def __init__(self,color,maxSpeed):
        self.color = color
        self.__maxSpeed = maxSpeed
    
    def getMaxSpeed(self):
        return self.__maxSpeed
    
    def setMaxSpeed(self,maxSpeed):
        self.__maxSpeed = maxSpeed

    def print(self):
        print(f"Color: {self.color}")
        print(f"MaxSpeed: {self.__maxSpeed}")


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