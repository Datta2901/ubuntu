// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int number;
//     cin >> number;
//     cout.setf(ios::fixed);
//     cout << "Hexadecimal is:" << ios::hex << number << endl;
//     cout <<"Octal is:"<< ios::oct << number << endl;
//     cout << "Decimal is:" << ios::dec << number << endl;
//     return 0;
// }
#include <iostream>
using namespace std; 
int main () { 
  long int a;
   cin>>a;
  cout.setf(ios::hex,ios::basefield );
 cout<<"Hexadecimal is:" <<hex<<a<<"\n";
   cout.setf(ios::oct,ios::basefield );
  cout<<"Octal is:"<<oct<<a<<"\n";
   cout.setf(ios::dec,ios::basefield );
    cout<<"Decimal is:"<<dec<<a;
  return 0; 
}  