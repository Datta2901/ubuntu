# Single Inheritance
class Animal0033:  
    def speak(self):  
        print("Animal Speaking")  
class Dog(Animal0033):  
    def bark(self):  
        print("dog barking")  
d = Dog()  
d.bark()  
d.speak() 
