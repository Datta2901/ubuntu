# class Computer:
#     __maxprice = 900
#     def _init_(self):
#         self.__maxprice = 900
#     def sell(self):
#         print("Selling Price: {}".format(self.__maxprice))
#     def setMaxPrice(self, price):
#         self.__maxprice = price
# c = Computer()
# c.sell()
# c.setMaxPrice(1000)
# c.sell()
class Parrot:
    
    # class attribute
    species = "bird"

    # instance attribute
    def _init_(self, name, age):
        self.name = name
        self.age = age

# instantiate the Parrot class
blu = Parrot("Blu", 10)
woo = Parrot("Woo", 15)

# access the class attributes
print("Blu is a {}".format(blu._class_.species))
print("Woo is also a {}".format(woo._class_.species))

# access the instance attributes
print("{} is {} years old".format( blu.name, blu.age))
print("{} is {} years old".format( woo.name, woo.age))