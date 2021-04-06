#include <iostream>
using namespace std;
class student
{
  public:
  int rno , m1 , m2 ;
  void get()
  {
     rno = 15, m1 = 10, m2 = 10;
   }
};
class Project
{
  public:
  int sm;
  void getsm()
  {
      sm = 10;
  }
};

class CodingNinja:public student, public Project
{
  int tot,avg;
  public:
  void display()
  {
     tot = (m1 + m2 + sm);
     avg = tot / 3;
     cout << tot;
     cout << avg;
  }
};
int main()
{
  CodingNinja obj;
  obj.get();
  obj.getsm();
  obj.display();
}