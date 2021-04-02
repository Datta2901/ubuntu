#include <iostream>
using namespace std;
  class Fraction
  {
    public:
    int a,denominator;
 
    Fraction()
    {
      a=0;
      denominator=0;
    }
 
    void getinput()
    {
      cin>>a>>denominator;
    }
 
    Fraction operator + (Fraction obj)
    {
      Fraction temp;
      temp.a=(a*obj.denominator)+(denominator*obj.a);
      temp.denominator=denominator*+obj.denominator;
      return temp;
    }
  };

   int main()
   {
     Fraction f1,f2,add;
     f1.getinput();
     f2.getinput();
     //+obj;
     add=f1+f2;
     cout<<add.a<<"/"<<add.denominator;
   // add.output();
   
return 0;
   }