class rectangle:
    length = 0
    breadth = 0
    def GetDimensions(self):
        self.length = input("Enter the length of the rectangle : ")
        self.breadth = input("Enter the breadth of the rectangle : ")
    def Perimeter(self,length,breadth):
        perimeter = int(2 * (length + breadth))
        print("Perimeter of the rectangle is : "  perimeter))
    def Area(self,length,breadth):
        area = int(length * breadth)
        print("Area of the rectangle: "+ area))   

obj = rectangle()
obj.GetDimensions()
obj.Perimeter(obj.length,obj.breadth)
obj.Area(obj.length,obj.breadth)        
