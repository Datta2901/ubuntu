#include<iostream>
using namespace std ;
enum Day { Sunday=0, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
int main()
{
    float number=10.5 ;
    int a =2.2,b;
    cout<<"Enter any one of the following numbers "<<endl ;
    cout<<"0 1 2 3 4 5 6 \n" ;
    // cin>>number ;
    //  payDay=Wednesday ;
    // Day payDay=(Day)number ;
    // cout<<payDay<<endl ;
    cout<<a+number <<endl;
    b=(int)a+number ;
    number=a+number ;
    cout<<number<<endl ;
    cout<<b<<endl ;

return 0 ;
}