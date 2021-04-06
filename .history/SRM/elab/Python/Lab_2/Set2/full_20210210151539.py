# Single Inheritance
class Animal00:  
    def speak(self):  
        print("Animal00 Speaking")  
class Dog(Animal00):  
    def bark(self):  
        print("dog barking")  
d = Dog()  
d.bark()  
d.speak() 
