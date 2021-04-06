class rectangle:
    length = 0
    breadth = 0
    def GetDimensions(self):
        self.length = input("Enter the length of the rectangle : ")
        self.breadth = input("Enter the breadth of the rectangle : ")
    def Perimeter(self):
        print("Perimeter of the rectangle is : " + str(2 * (slength + sbreadth)))
    def Area(self):
        print("Area of the rectangle: "+ str(slength * sbreadth) )   

obj = rectangle()
obj.GetDimensions()
obj.Perimeter()
obj.Area()        
