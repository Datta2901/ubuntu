#include<iostream>
using namespace std ;
class rectangle 
{
    public :
    int width ;
    int length ;
    int get_area()
    {
        return width*length ;
    }
} ;
int main()
{
    rectangle a ;
    // rectangle a{3,4} ; or
    cout<<"Enter the dimensions of the rectangle\n" ;
    cin>>a.width  ;
    cin>>a.length;
    // int area{a.get_area()} ;or
    int area =a.get_area() ;
    cout<<"The area of rectangle is "<<area<<"\n" ;
    return 0 ;
}