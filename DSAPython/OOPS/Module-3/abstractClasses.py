# Abstract classes contain one or more abstract methods, which are methods that must be defined in any concrete subclasses.Abstract class can't be instantiated. It can only be used as a base class for other classes that extend the abstract class.

from abc import ABC, abstractmethod

class Automobile(ABC):
    def __init__(self):
        print("Automobile created")

    @abstractmethod
    def start(self):
        print("Start method from Automobile class")

    @abstractmethod
    def stop(self):
        print("Stop method from Automobile class")

    @abstractmethod
    def drive(self):
        print("Drive method from Automobile class")


class Car(Automobile):
    def __init__(self, name):
        print("Car created")
        self.name = name

    def start(self):
        super().start()
        print(f"{self.name} car has started")

    def stop(self):
        print(f"{self.name} car has stopped")

    def drive(self):
        print(f"{self.name} car is being driven")


class Bus(Automobile):
    def __init__(self, name):
        print("Bus created")
        self.name = name

    def start(self):
        print(f"{self.name} bus has started")

    def stop(self):
        print(f"{self.name} bus has stopped")

    def drive(self):
        print(f"{self.name} bus is being driven")


# c = Automobile()
c = Car("Audi")
c.start()
c.stop()    
c.drive()
print()

b = Bus("Volvo")
b.start()
b.stop()
b.drive()