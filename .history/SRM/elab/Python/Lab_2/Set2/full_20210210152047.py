class Calculation10033:  
    def Summation003(self,a,b):  
        return a+b;  
class Calculation2:  
    def Multiplication(self,a,b):  
        return a*b;  
class Derived(Calculation10033,Calculation2):  
    def Divide(self,a,b):  
        return a/b;  
d = Derived()  
print(d.Summation003(10,20))  
print(d.Multiplication(10,20))  
print(d.Divide(10,20))