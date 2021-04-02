# Multiple Inheritance
class Animal0:  
    def speak(self):  
        print("Animal0 Speaking")   
class Dog(Animal0):  
    def bark(self):  
        print("dog barking")   
class DogChild(Dog):  
    def eat(self):  
        print("Eating bread")  
d = DogChild()  
d.bark()  
d.speak()  
d.eat() 
