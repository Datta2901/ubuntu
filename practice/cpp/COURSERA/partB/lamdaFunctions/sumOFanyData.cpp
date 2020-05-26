// Cpp program to demonstrate 
// generalized lambda expressions 
#include <iostream> 
#include <string> 
using namespace std; 
int main() 
{ 

	// Declare a generalized lambda and store it in sum  
   auto sum = [](auto a,auto b){
        return (a + b);
    };
	// Find sum of two integers 
	cout << sum(1, 6) << endl; 

	// Find sum of two floating numbers 
	cout << sum(1.0, 5.6) << endl; 

	// Find sum of two strings 
	cout << sum(string("Geeks"), string("ForGeeks")) << endl;


	return 0; 
} 
