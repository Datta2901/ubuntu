class rectangle:
    length = 0,breadth = 0
    def GetDimensions(self):
        self.length = input("Enter the length of the rectangle ")
    def Perimeter(self,length,breadth):
        print("Perimeter of the rectangle is : ",2 * (length + breadth))
    def Area(self,length,breadth):
        print("Area of the rectangle: ",length * breadth)    

obj = rectangle()        