# class Parrot:
#     def fly(self):
#         print("Parrot can fly")
#     def swim(self):
#         print("Parrot can’t swim")
# class Penguin:
#     def fly(self):
#         print("Penguin can’t fly")
#     def swim(self):
#         print("Penguin can swim")
#     # common interface
# def flying_test(bird):
#         bird.fly()
# #instantiate objects
# blu = Parrot()
# peggy = Penguin()
# # passing the object
# flying_test(blu)
# flying_test(peggy)
class Parrot:
    def _init_(self,name,age):
        self.name = name
        self.age = age
blu = Parrot("Blu", 10)
woo = Parrot("Woo", 15)
print(blu.name)
