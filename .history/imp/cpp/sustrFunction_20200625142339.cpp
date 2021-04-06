// CPP program to illustrate substr() 
#include <string.h> 
#include <iostream> 
using namespace std; 

int main() 
{ 
	// Take any string 
	string s1 ;
    cin >> s1; 

	// Copy three characters of s1 (starting 
	// from position 1) 
	string r = s1.substr(1, 3); 

	// prints the result 
	cout << "String is: " << r << endl; 

	return 0; 
} 

string Assign function there to assignment one string char or string to other string
string append function is there same
we can directly assign by stringName += char required same