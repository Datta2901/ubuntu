class Grandparent0:
    def gdisplay(self):
        print("grandparent0 class")
class Parent(Grandparent0):
    def pdisplay(self):
        print("parent class")
class child(Parent):
        def show(self):
            print("child class")
obj= child()
obj.gdisplay()
obj.pdisplay()
obj.show()
