class rectangle:
    length = 0
    breadth = 0
    def GetDimensions(self):
        self.length = input("Enter the length of the rectangle : ")
        self.breadth = input("Enter the breadth of the rectangle : ")
    def Perimeter(self,length,breadth):
        print("Perimeter of the rectangle is : " + str(2 * (self.length + self.breadth)))
    def Area(self,length,breadth):
        print("Area of the rectangle: "+ str(self.length * self.breadth) )   

obj = rectangle()
obj.GetDimensions()
obj.Perimeter()
obj.Area()        
