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
d0033 = DogChild()  
d0033.bark0033()  
d0033.speak0033()  
d0033.eat0033() 
