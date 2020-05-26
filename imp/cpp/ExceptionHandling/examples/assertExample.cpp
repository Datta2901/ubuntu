#include <iostream>
#include <cassert>
using namespace std;

inline void print(int *myInt)
{
   assert(myInt != '\0');
   cout << *myInt << endl;
}

int main()
{
   int i = 5; 
   int *p = &i;
   int *q = '\0';
   print(&i);
   print(p);
   print(q);
}