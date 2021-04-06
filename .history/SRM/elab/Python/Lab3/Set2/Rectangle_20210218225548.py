class rectangle:
    length = 0
    breadth = 0
    def GetDimensions(self):
        self.length = input("Enter the length of the rectangle : ")
        self.breadth = input("Enter the breadth of the rectangle : ")
    def Perimeter(self):
        print("Perimeter of the rectangle is : " + str(2 * (self.length + self.breadth)))
    def Area(self):
        answer = int(self.length * self.breadth))
        print("Area of the rectangle: ",   

obj = rectangle()
obj.GetDimensions()
obj.Perimeter()
obj.Area()        
