class Calculation10033:  
    def Summation0033(self,a,b):  
        return a+b;  
class Calculation20033:  
    def Multiplication0033(self,a,b):  
        return a*b;  
class Derived0033(Calculation10033,Calculation20033):  
    def Divide00(self,a,b):  
        return a/b;  
d = Derived0033()  
print(d.Summation0033(10,20))  
print(d.Multiplication0033(10,20))  
print(d.Divide00(10,20))