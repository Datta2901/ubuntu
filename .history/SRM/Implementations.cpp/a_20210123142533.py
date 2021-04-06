class A:
    def sum(self,a,b):
        return a + b
    
class B(A):
    def sum(self,a,b):
        return a*b

print(B())    