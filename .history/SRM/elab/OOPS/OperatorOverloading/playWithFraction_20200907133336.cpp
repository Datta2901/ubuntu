#include <iostream>
using namespace std;
class Fraction{
    public:
    int a,b;
 
    Fraction(){
      a = 0;
      b = 0;
    }
 
    void getinput(){
      cin >> a >> b;
    }
 
    Fraction operator + (Fraction obj){
      Fraction temp;
      temp.a=(a*obj.b)+(b*obj.a);
      temp.b=b*+obj.b;
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
     cout<<add.a<<"/"<<add.b;
   // add.output();
   
return 0;
   }