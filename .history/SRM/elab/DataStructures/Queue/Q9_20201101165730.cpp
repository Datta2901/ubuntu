#include <bits/stdc++.h>
using namespace std;
void gen(int n)
{
 cout << "\n";
}
int f(int num)
{
 long  number, rem, base = 1, answer = 0, no_of_1s = 0;
    number = num;
    while (num > 0)
    {
        rem = num % 2;
        if (rem == 1)
        {
            no_of_1s++;
        }
        answer = answer + rem * base;
        num = num / 2;
        base = base * 10;
    }
    return answer;
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