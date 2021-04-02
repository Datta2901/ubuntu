# Multiple Inheritance
class Animal0033:  
    def speak00(self):  
        print("Animal0033 Speaking")   
class Dog(Animal0033):  
    def bark(self):  
        print("dog barking")   
class DogChild(Dog):  
    def eat(self):  
        print("Eating bread")  
d = DogChild()  
d.bark()  
d.speak00()  
d.eat() 
