#include<stdio.h>
int main ()
{
  int t ;
  scanf("%d",&t);
  while(t--)
  {
      int n,answer,a ;
      scanf("%d",&n);
      for (answer= 0 ;n !=0;n=n/10)
      {   
          a = n%10 ;
          answer=answer*10+ a ;
      }
        printf("%d\n",answer);
  }
return 0 ;
}