// #include <iostream>
// using namespace std;
// class student
// {
//   public:
//   int rno , m1 , m2 ;
//   void get()
//   {
//      rno = 15, m1 = 10, m2 = 10;
//    }
// };
// class Project
// {
//   public:
//   int sm;
//   void getsm()
//   {
//       sm = 10;
//   }
// };

// class CodingNinja:public student, public Project
// {
//   int tot,avg;
//   public:
//   void display()
//   {
//      tot = (m1 + m2 + sm);
//      avg = tot / 3;
//      cout << tot;
//      cout << avg;
//   }
// };
// int main()
// {
//   CodingNinja obj;
//   obj.get();
//   obj.getsm();
//   obj.display();
// }
#include <iostream>
using namespace std;
class parent
{
  public:
  virtual void example() = 0; 
};
class child1:public parent
{
  public:
  void example()
  {
      cout << "Coding Ninjas";
  }
};
class child2:public parent
{
  public:
  void example()
  {
      cout << " is awesome";
  }
};
int main()
{
//   parent* arr[2];
//   child1 e1;
//   child2 e2;
//   arr[0]=&e1;
//   arr[1]=&e2;
//   arr[0]->example();
//   arr[1]->example();
bitset<8> b1(95);
bitset<8> b2 = b1>>3;
cout << b
}