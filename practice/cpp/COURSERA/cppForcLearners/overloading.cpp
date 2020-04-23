#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
class point
{
    public:
    point(double u):x(u),y(0.0){}
    operator double() ;
    point(double d) ;
    private:
     double x,y ;
};


point :: operator double()
{
    return sqrt(x*x+y*y) ;
}




int main()
{
    double u ;
    cin>>u ;
    point a(u) ;
    double d =2.5 ;
    a=d ;//implicit convertion
    a=static_cast<double>(d) ;//explicit convertion
    cout<<a<<endl ;
    return 0 ;
}