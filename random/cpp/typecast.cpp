#include<iostream>
using namespace std ;
int main()
{
    char ch;
    int i = 65;
    float f = 2.5;
    double dbl;
    ch = static_cast<char>(i);   // int to char
    dbl = static_cast<double>(f);   // float to double
    cout<<"The value of ch is"<<ch<<"and dbl is "<<dbl<<"\n"  ;
}