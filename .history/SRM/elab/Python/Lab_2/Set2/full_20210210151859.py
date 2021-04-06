class Grandparent0033:
    def gdisplay0033(self):
        print("grandparent class")
class Parent0033(Grandparent0033):
    def pdisplay0033(self):
        print("parent class")
class child(Parent0033):
        def show(self):
            print("child class")
obj= child()
obj.gdisplay0033()
obj.pdisplay0033()
obj.show()
