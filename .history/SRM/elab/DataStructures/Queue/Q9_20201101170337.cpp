// print the binary nmbers form given 1 ro given nmber
#include <bits/stdc++.h>
using namespace std;
void gen(int nm)
{
 long  nmber, rem, base = 1, answer = 0, count = 0;
    nmber = nm;
    while (nm > 0)
    {
        rem = nm % 2;
        if (rem == 1)
        {
            count++;
        }
        answer = answer + rem * base;
        nm = nm / 2;
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