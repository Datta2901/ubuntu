class Fence:
    def _init_(self,length,breadth,space,height):
        self.length =length
        self.breadth= breadth
        self.space = space
        self.height= height
    def lengthofboard(self):
        perimeter =4*(self.length+self.breadth)
        nofences=perimeter/(10+self.space)
        return nofences * self.height

field1 = Fence(1000,2000,5,100)
print('the total length'+str(int(field1.lengthofboard())))