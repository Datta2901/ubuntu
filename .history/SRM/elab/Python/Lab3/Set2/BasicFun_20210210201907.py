class Details:
    name = " "
    def get_string(self):
        name = input("Enter the name")
    def print_string(self,name):
        print("Given string is ",name)
        print("String in lowercase : ",name.lower())         
        print("String in upercase : ",name.upper())

obj = Details()
obj.get_string()
obj.print_string()                 