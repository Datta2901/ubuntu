#include<iostream>
#include<bits/stdc++.h>
#include<complex>
using namespace std ;
template<class T>//here T is called meta variable.
inline void swap1(T&s,T&t)
{
    T temp=s ;
    s=t ;
    t=temp ;
    cout<<s<<" "<<t<<"\n" ;
}
int main()
{
    cout<<"Enter the two integers\n" ;
    int m,n ;
    cin>>m ;
    cin>>n ;
    swap1(m,n);
    cout<<"the two integers"<<m<<" "<<n<< "\n ";
    double a,b ;
    cin>>a ;
    cin>>b;
    swap1(a,b) ;
    cout<<"the two  doubles"<<a<<" "<<b<<"\n" ;
    
    return 0 ;
}
