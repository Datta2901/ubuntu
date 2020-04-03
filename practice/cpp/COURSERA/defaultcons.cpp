// Cpp program to illustrate the 
// concept of Constructors 
#include <iostream> 
using namespace std; 

class construct { 
public: 
	int a, b; 

	// Default Constructor 
	construct() 
	{ 
		a = 10; 
		b = 20; 
	} 
}; 

int main() 
{ 
	// Default constructor called automatically 
	// when the object is created 
	construct c; 
	cout << "a: " << c.a << endl 
	     << "b: " << c.b; 
	return 1; 
} 
// these are the three types of default constructors
// this. can be used to as default constructor
// 1.this is pointer which assigns the values of a variable
//2. point{members like x=0,y=0}
//3. point():x(0.0),y(0.0){} initializer list