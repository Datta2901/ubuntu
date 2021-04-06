class Grandparent0033:
    def gdisplay0(self):
        print("grandparent class")
class Parent0033(Grandparent0033):
    def pdisplay(self):
        print("parent class")
class child(Parent0033):
        def show(self):
            print("child class")
obj= child()
obj.gdisplay0()
obj.pdisplay()
obj.show()
