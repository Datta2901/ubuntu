#include <stdio.h>

int ones(int n)
{
 int count = 0;
 while(n)
 {
  if(n&1)
   count++;
  n>>=1;
 }
 return count;
}

int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while(t--)
    {
     scanf("%d",&n);
     printf("%d\n",ones(n));
    }
    return 0;
}

