class Grandparent0033:
    def gdisplay(self):
        print("grandparent0033 class")
class Parent(Grandparent0033):
    def pdisplay(self):
        print("parent class")
class child(Parent):
        def show(self):
            print("child class")
obj= child()
obj.gdisplay()
obj.pdisplay()
obj.show()
