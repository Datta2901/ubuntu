#include<iostream>
using namespace std ;

class point
{
    public: 
    double x,y ; 
        double getx(double x) 
        {
            return x ;
        }
        void setx(double v)
        {
            double x ;
            x=v ;
        }
      private:
        ;
         
};
int main()
{
    point a ;
    cout<<a.x ;
   
}