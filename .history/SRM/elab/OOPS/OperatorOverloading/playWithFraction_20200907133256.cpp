#include <iostream>
using namespace std;
  class Fraction
  {
    public:
    int a,;
 
    Fraction()
    {
      a=0;
      =0;
    }
 
    void getinput()
    {
      cin>>a>>;
    }
 
    Fraction operator + (Fraction obj)
    {
      Fraction temp;
      temp.a=(a*obj.)+(*obj.a);
      temp.=*+obj.;
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
     cout<<add.a<<"/"<<add.;
   // add.output();
   
return 0;
   }