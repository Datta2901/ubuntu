class Grandparent:
    def gdisplay(self):
        print("grandparent class")
class Parent(Grandparent):
    def pdisplay(self):
        print("parent class")
class child(Parent):
        def show(self):
            print("child class")
obj= child()
obj.gdisplay()
obj.pdisplay()
obj.show()
