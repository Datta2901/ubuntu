class A:
    def sum(self,a,b):
        return a + b
    
class B(A):
    def pr(self,a,b):
        return a*b

print(B().sum(3, 4))    