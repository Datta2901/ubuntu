#include<iostream>
using namespace std ;
int main()
{
    cout<<"enter two numbers";
    int i;float j ;
    cin>>i ;
    cin>>j;
    i=static_cast<int>(j) ;
    cout<<"the value of i is "<< i <<"\n" ;
    cout<<"Enter a number" ;
    double d ;
    int i=-1 ;
    cin>>d ;
    i=static_cast<int>(d) ;
    d=i ;cout<<d<<endl ;
    bool flag(true) ;
    flag =false  ;
    flag=static_cast<bool>(7);
    cout<<flag<<endl ;
    return 0 ;


    


}