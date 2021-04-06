# Single Inheritance
class Parent:
    def display(self):
        print("parent class")
        
class child(Parent):
        def show(self):
            print("child class")
 
obj= child()
obj.show()
obj.display()