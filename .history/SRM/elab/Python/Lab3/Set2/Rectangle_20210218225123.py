class rectangle:
    length = 0
    breadth = 0
    def GetDimensions(self):
        self.length = input("Enter the length of the rectangle : ")
        self.breadth = input("Enter the breadth of the rectangle : ")
    def Perimeter(self,length,breadth):
        perimeter = (2 * (length + breadth)
        print("Perimeter of the rectangle is : " + str(perimeter))
    def Area(self,length,breadth):
        area = length * breadth
        print("Area of the rectangle: "+ str(area))   

obj = rectangle()
obj.GetDimensions()
obj.Perimeter(obj.length,obj.breadth)
obj.Area(obj.length,obj.breadth)        
