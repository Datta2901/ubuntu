class Details:
    name = " "
    def __init__(self,name): 
        self.name = name
    def get_string(self):
        self.name = input("Enter the name")
    def print_string(self,name):
        print("Given string is ",self.name)
        print("String in lowercase : ",self.name.lower())         
        print("String in upercase : ",self.name.upper())

obj = Details(" ")
obj.get_string()
obj.print_string(obj.name)                 