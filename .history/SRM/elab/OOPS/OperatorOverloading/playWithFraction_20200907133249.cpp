#include <iostream>
using namespace std;
  class Fraction
  {
    public:
    int ,denominator;
 
    Fraction()
    {
      =0;
      denominator=0;
    }
 
    void getinput()
    {
      cin>>>>denominator;
    }
 
    Fraction operator + (Fraction obj)
    {
      Fraction temp;
      temp.=(*obj.denominator)+(denominator*obj.);
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
     cout<<add.<<"/"<<add.denominator;
   // add.output();
   
return 0;
   }