#include <bits/stdc++.h>
using namespace std;
void gen(int n)
{
 cout << "\n";
}
int f(int num)
{
 long  number, rem, base = 1, answer = 0, count = 0;
    number = num;
    while (num > 0)
    {
        rem = num % 2;
        if (rem == 1)
        {
            count++;
        }
        answer = answer + rem * base;
        num = num / 2;
        base = base * 10;
    }
    return answer;
}
int main()
{
  int testcase;
  cin >> testcase;
  while(testcase--){
   int upto;
   cin >> upto;
   for(int i=1;i<=upto;i++){
        cout<< f(i)<<" ";
        cout<<endl;
   }
             
       
  }
}