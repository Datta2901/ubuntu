#include<iostream>
using namespace std ;
class point{
    public: 
    
     double x,y;

};

void summation(double *x,double *y,double *sum=0)
{
    *sum=*x+*y ;
}
int main()
{
    point a ;
    double b,sum=0;
    cin>>a.x ;
    cin>>a.y ;
    summation(&a.x,&a.y,&sum) ;
    cout<<sum <<endl ;
    return 0 ;
}