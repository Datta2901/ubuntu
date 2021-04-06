# class rectangle:
#     length = 0
#     breadth = 0
#     def GetDimensions(self):
#         self.length = input("Enter the length of the rectangle : ")
#         self.breadth = input("Enter the breadth of the rectangle : ")
#     def Perimeter(self,length,breadth):
#         print("Perimeter of the rectangle is : " + str(2 * (length + breadth)))
#     def Area(self,length,breadth):
#         print("Area of the rectangle: "+ str(length * breadth) )   

# obj = rectangle()
# obj.GetDimensions()
# obj.Perimeter(obj.length,obj.breadth)
# obj.Area(obj.length,obj.breadth)        
def table(l):
    print('printing the table\n')
    for i in range(1,11):
        print("3600 ",end = " ") 
        print(i,)
        print( "| ",i *3600)
        print("\n")
table(3600)