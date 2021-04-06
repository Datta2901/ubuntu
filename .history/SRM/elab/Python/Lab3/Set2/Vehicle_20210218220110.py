# A vehicle class consist of vehicle data and standard methods to manipulate vehicle data. Write a Python child class Bus that will inherit all of the variables and methods of the Vehicle class. Child class consist of new methods that update the value of vehicle class and display in the output.
class Vehicle:
    def __init__(self,type,number):
        self.type = type
        self.number = number
    def PrintDetails(self):
        print("Printing from vehicle class ",self.type)
        print("Printing from vehicle class ",self.number)

class Bus(Vehicle):
    def __init__(self,type,number):
        self.type = type
        self.number = number
    def PrintDetails(self):
        print("Printing from bus class",self.type)
        print("Printing from bus class",self.number)
obj1 = Vehicle("Bus","4567")
obj2 = Bus("Luxary","12345")
obj1.P
obj2.PrintDetails()
