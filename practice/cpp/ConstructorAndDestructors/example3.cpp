// C++ program to explain 
// multiple inheritance 
#include <iostream> 
using namespace std; 

// first base class 
class Vehicle { 
public: 
	Vehicle(){ 
	cout << "This is a Vehicle" << endl; 
	} 
}; 

// second base class 
class FourWheeler { 
public: 
	FourWheeler(){ 
	cout << "This is a 4 wheeler Vehicle" << endl; 
	} 
}; 

// sub class derived from two base classes 
class Car: public Vehicle, public FourWheeler {
public: 
    Car(){
        cout << "Car can carry 4 people\n";
    }

}; 

// main function 
int main() 
{ 
	// creating object of sub class will 
	// invoke the constructor of base classes 
	Car obj;
    FourWheeler bus; 
	return 0; 
} 
