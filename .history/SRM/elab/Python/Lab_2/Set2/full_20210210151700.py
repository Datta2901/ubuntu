# Multiple Inheritance
class Animal0033:  
    def speak0033(self):  
        print("Animal0033 Speaking")   
class 0(Animal0033):  
    def bark(self):  
        print("dog barking")   
class DogChild(0):  
    def eat(self):  
        print("Eating bread")  
d = DogChild()  
d.bark()  
d.speak0033()  
d.eat() 
