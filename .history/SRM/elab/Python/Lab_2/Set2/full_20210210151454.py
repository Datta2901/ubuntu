# Single Inheritance
class Parent003:
    def display(self):
        print("parent003 class")
        
class child(Parent003):
        def show(self):
            print("child class")
 
obj= child()
obj.show()
obj.display()