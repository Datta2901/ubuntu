class Grandparent0033:
    def gdisplay0033(self):
        print("grandparent class")
class Parent0033(Grandparent0033):
    def pdisplay0033(self):
        print("parent class")
class child0033(Parent0033):
        def show003(self):
            print("child0033 class")
obj= child0033()
obj.gdisplay0033()
obj.pdisplay0033()
obj.show003()
