class sample:
    num1_0021=900   
    __num2_0021=900 
    
    def show():
        print("Original value of num1 and num2 are {.num1_0021} and {.__num2_0021} ")
    
    def show_after_changing():
        print("Values of num1 and num2 after changing are {.num1_0021} and {.__num2_0021} ")

obj=sample()
obj.show()
sample.num1_0021=1000 
sample.__num2_0021=1000 

obj.show_after_changing()