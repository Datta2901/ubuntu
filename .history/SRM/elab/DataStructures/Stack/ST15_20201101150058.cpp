//  to generate a program to find maximum sum possible equal sum of three stacks
#include <iostream>
using namespace std;
int maxSum(int stack1[], int stack2[], int stack3[],int n1, int n2, int n3)
{
 int sum1 = 0, sum2 = 0, sum3 = 0;
 for (int i=0; i < n1; i++)
  sum1 += stack1[i];
 for (int i=0; i < n2; i++)
  sum2 += stack2[i];
 for (int i=0; i < n3; i++)
  sum3 += stack3[i];
 int top1 =0, top2 = 0, top3 = 0;
while(1)
{ 
  if (top1 == n1 || top2 == n2 || top3 == n3)
   return 0;
  if (sum1 == sum2 && sum2 == sum3)
   return sum1;
  if (sum1 >= sum2 && sum1 >= sum3)
   sum1 -= stack1[top1++];
  else if (sum2 >= sum3 && sum2 >= sum3)
   sum2 -= stack2[top2++];
  else if (sum3 >= sum2 && sum3 >= sum1)
   sum3 -= stack3[top3++];
 }
}
int main()
{
  int x,y,z;
  cin >> x >> y >> z;
  int stack1[x],stack2[y],stack3[z];
  for(int i=0;i<x;i++)
    cin >> stack1[i];
  for(int i=0;i<y;i++)
    cin >> stack2[i];
  for(int i=0;i<z;i++)
    cin >> stack3[i];
  cout << maxSum(stack1,stack2,stack3,x,y,z);
  return 0;
}