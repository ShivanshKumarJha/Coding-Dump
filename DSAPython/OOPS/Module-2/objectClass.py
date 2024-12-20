class Circle(object):
    def __init__(self, radius):
        self.__radius = radius

    def area(self):
        return 3.14 * self.__radius * self.__radius

    def perimeter(self):
        return 2 * 3.14 * self.__radius
    
    def __str__(self):
        return "This is a Circle class which takes radius as an argument."
    
c = Circle(3)
print(c) 

'''
    Every class is inherited from object class in python which have three methods:
    1. __new__ : It is used to create an object.
    2. __init__ : It is used to initialize the object.
    3. __str__ : It is used to print the object with some detail.

    By default print(c) will give output as <__main__.Circle object at 0x000001A289316A50>
    But if we want to print some custom message then we can use __str__ method.
'''