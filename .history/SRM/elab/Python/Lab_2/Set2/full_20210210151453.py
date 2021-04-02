# Single Inheritance
class Parent00:
    def display(self):
        print("parent00 class")
        
class child(Parent00):
        def show(self):
            print("child class")
 
obj= child()
obj.show()
obj.display()