class Mother:
    def __init__(self):
        self.name = "Manju"
        super().__init__()

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
    
    def print(self):
        print(f"Name of child is {self.name}")


c = Child() 
c.print()
print(Child.mro())  # This will print the method resolution order of the Child class. 
# This method resolution order uses the concept of DFS(Depth First Search) to find the method to be called.