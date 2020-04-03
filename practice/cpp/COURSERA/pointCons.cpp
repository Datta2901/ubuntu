#include<iostream>
class point
{   
    public:
     double x,y ;
     double getx(double x)
     {
         return x ;
     }

    double setx(double v)
    {
        return v ;
        x=v ;
    }
    point(double x,double y) {this->x=x;this->y=y;}

    public:
    double x,y ;
}; 

int main()
{
   
    // point a ;
    // ?cout<<a.x() ;




    return 0 ;
}