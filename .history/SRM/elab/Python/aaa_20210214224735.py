class sample:
    num1_0021=900   
    __num2_0021=900 
    
    def show(self):
        print("Original value of num1 and num2 are {self.num1_0021} and {self.__num2_0021} ")
    
    def show_after_changing(self):
        print("Values of num1 and num2 after changing are {self.num1_0021} and {self.__num2_0021} ")

obj=sample()
obj.show()
sample.num1_0021=1000 
sample.__num2_0021=1000 

obj.show_after_changing()