class Calculation10033:  
    def Summation0033(self,a,b):  
        return a+b;  
class Calculation20033:  
    def Multiplication(self,a,b):  
        return a*b;  
class Derived(Calculation10033,Calculation20033):  
    def Divide(self,a,b):  
        return a/b;  
d = Derived()  
print(d.Summation0033(10,20))  
print(d.Multiplication(10,20))  
print(d.Divide(10,20))