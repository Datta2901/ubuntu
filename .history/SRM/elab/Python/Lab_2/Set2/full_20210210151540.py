# Single Inheritance
class Animal0033:  
    def speak(self):  
        print("Animal0033 Speaking")  
class Dog(Animal0033):  
    def bark(self):  
        print("dog barking")  
d = Dog()  
d.bark()  
d.speak() 
