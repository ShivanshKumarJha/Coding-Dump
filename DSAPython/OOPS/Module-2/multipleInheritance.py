class Mother:
    def __init__(self):
        self.name = "Manju"

    def print(self):
        print("Print of Mother called")


class Father:
    def __init__(self):
        self.name = "Ajay"

    def print(self):
        print("Print of Father called")


class Child(Father,Mother):
    def __init__(self):
        super().__init__()
    
    def printChild(self):
        print(f"Name of child is {self.name}")


c = Child()
# This will assign the name of Father class because Father class is inherited first in the Child class.
c.printChild()  

# This will call the print method of Father class because Father class is inherited first in the Child class.
c.print() 