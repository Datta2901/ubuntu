// print the binary nbers form given 1 ro given nber
#include <bits/stdc++.h>
using namespace std;
void gen(int n)
{
 lonng rem, base = 1, answer = 0, count = 0;
  
    while (n > 0)
    {
        rem = n % 2;
        if (rem == 1)
        {
            count++;
        }
        answer = answer + rem * base;
        n = n / 2;
        base = base * 10;
    }
    cout << answer<<" ";
}
int main()
{
  int testcase;
  cin >> testcase;
  while(testcase--){
    int upto;
    cin >> upto;
    for(int i=1;i<=upto;i++){
        gen(i);
    }  
    cout << endl;
  }
}