class rectangle:
    length = 0
    breadth = 0
    def GetDimensions(self):
        self.length = int(input("Enter the length of the rectangle : ")
        self.breadth = input("Enter the breadth of the rectangle : ")
    def Perimeter(self):
        print("Perimeter of the rectangle is : " + str(2 * (int(self.length) + int(self.breadth)))
    def Area(self):
        print("Area of the rectangle: ", int(int(self.length) * int(self.breadth)))   

obj = rectangle()
obj.GetDimensions()
obj.Perimeter()
obj.Area()        
