class Grandparent0033:
    def gdisplay0033(self):
        print("grandparent class")
class Parent0033(Grandparent0033):
    def pdisplay0033(self):
        print("parent class")
class child00(Parent0033):
        def show(self):
            print("child00 class")
obj= child00()
obj.gdisplay0033()
obj.pdisplay0033()
obj.show()
