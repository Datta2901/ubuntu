class Parrot:

    species = "bird"
    name = " "
    age = 1
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