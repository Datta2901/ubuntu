class B:
    def prod(self,a,b):
        return a* b
    
class A(B):
    def sum(self,a,b):
        return a b

print(B().sum(3, 4))    