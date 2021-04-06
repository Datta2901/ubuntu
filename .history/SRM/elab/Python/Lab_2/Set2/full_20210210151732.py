# Multiple Inheritance
class Animal0033:  
    def speak0033(self):  
        print("Animal Speaking")   
class Dog0033(Animal0033):  
    def bark0033(self):  
        print("dog barking")   
class DogChild(Dog0033):  
    def eat0033(self):  
        print("Eating bread")  
d00 = DogChild()  
d00.bark0033()  
d00.speak0033()  
d00.eat0033() 
