class Details:
    name = " "
    def get_string():
        name = input("Enter the name")
    def print_string(self):
        print("Given string is ",self.name)
        print("String in lowercase : ",self.name.lower())         
        print("String in upercase : ",self.name.upercase())

obj = Details()
obj.get_string()
obj.print_string()                 