#include <iostream>
using namespace std;
class Fraction{
    public:
    int a,b;
 
    Fraction(){
      a = 0;
      b = 0;
    }
 
    void read(){
      cin >> a >> b;
    }
 
    Fraction operator + (Fraction obj){
      Fraction c;
      c.a =(a * obj.b)+(b * obj.a);
      c.b = b * +obj.b;
      return c;
    }
  };

   int main()
   {
     Fraction ,f2,add;
     .read();
     f2.read();
     add=+f2;
     cout<<add.a<<"/"<<add.b;
   
return 0;
   }