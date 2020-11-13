#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
string a;
getline(cin,a,':');
float f;
cin >> f;
stringstream my_stream(ios::in|ios::out);
my_stream << a;
my_stream.seekg(-7,ios::end);
std::string dat(a);
cout << "I have a double : " << f*f;
return 0;
}