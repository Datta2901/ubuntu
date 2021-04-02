# Multiple Inheritance
class Animal0033:  
    def speak0033(self):  
        print("Animal0033 Speaking")   
class Dog0033(Animal0033):  
    def bark0033(self):  
        print("dog barking")   
class DogChild(Dog0033):  
    def eat(self):  
        print("Eating bread")  
d = DogChild()  
d.bark0033()  
d.speak0033()  
d.eat() 
