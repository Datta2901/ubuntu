#include<iostream>
class point
{
    public:
    point(double x,double y):x(0.0),y(0.0){}
      point operator+(point p)
      {
          return point(x+p.x,y+p.y ) ;
      }
      private:
       double x,y ;     
};
using namespace std ;
int main()
{
    point a,b(2,1),c(3,1) ;

    return 0 ;
}