class Grandparent003:
    def gdisplay(self):
        print("grandparent003 class")
class Parent(Grandparent003):
    def pdisplay(self):
        print("parent class")
class child(Parent):
        def show(self):
            print("child class")
obj= child()
obj.gdisplay()
obj.pdisplay()
obj.show()
