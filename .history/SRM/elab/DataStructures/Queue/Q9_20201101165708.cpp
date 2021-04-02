#include <bits/stdc++.h>
using namespace std;
void gen(int n)
{
 cout << "\n";
}
int f(int num)
{
 long  number, remainder, base = 1, binary = 0, no_of_1s = 0;
    number = num;
    while (num > 0)
    {
        remainder = num % 2;
        if (remainder == 1)
        {
            no_of_1s++;
        }
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    return binary;
}
int main()
{
  int x;
  cin>>x;
  while(x--)
  {
   int gg;
   cin>>gg;
   for(int i=1;i<=gg;i++)
              cout<<f(i)<<" ";
          cout<<endl;
  }
}