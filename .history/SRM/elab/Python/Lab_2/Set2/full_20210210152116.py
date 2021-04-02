class Calculation10033:  
    def Summation0033(self,a,b):  
        return a+b;  
class Calculation20033:  
    def Multiplication0033(self,a,b):  
        return a*b;  
class Derived0033(Calculation10033,Calculation20033):  
    def Divide0033(self,a,b):  
        return a/b;  
d0033 = Derived0033()  
print(d0033.Summation0033(10,20))  
print(d0033.Multiplication0033(10,20))  
print(d0033.Divide0033(10,20))