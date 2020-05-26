// to demonistrate the exact function of the exception handlers in c++
#include <iostream> 
using namespace std; 

int main() 
{ 
int x ; 
cin >> x;
// Some code 
cout << "Before try \n"; 
try { 
	cout << "Inside try \n"; 
	if (x < 0) 
	{ 
		throw x; 
		cout << "After throw (Never executed) \n"; 
	}
    cout << "If condition is false it will execute normally \n"; 
} 
catch (int x ) { 
	cout << "Exception Caught \n"; 
} 

cout << "After catch (Will be executed) \n"; 
return 0; 
} 
