#include <iostream>
using namespace std;
class A{
public:
  int pen;
  void display(){
  cin>>pen;
  }
};
class B{
public:
  int price;
  void display(){cin>>price;}
};
class C:public A,public B{
public:
  void display(){
  	A::display();
    B::display();
    cout<<pen*price;
  }
};
int main() {
    C sample;
  	sample.display();
    return 0;
  }