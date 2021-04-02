#include<stdio.h>
int main ()
{
  printf("Enter the number");
  int n,t1,t2,a,c=0,s=0;
  unsigned long long int p=1 ;
  scanf("%d",&n);
  for(t1=0,t2=1; c<= n;t1=t2,t2=a,c++)
  {   
      a =t1+t2 ;
      printf("%d  ",a);
      s=s+a ;
      p=p*a ;
  }
  printf("\nthe sum of first n fibanocci numbers=%d\n",s);
  printf("the product of first n fibanocci numbers=%lld\n",p);

return 0 ;
}