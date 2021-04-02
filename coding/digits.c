#include<stdio.h>
int main()
{
  printf("Enter a number");
  int n,b,s ;
  scanf("%d",&n);
 for(s=0;n != 0;n= n/10)
  {
    b=n%10 ;
    printf("%d ",b);
    s=s+b ;  
  }
printf("The sum of digits of given numbern %d\n",s);
return 0 ;
}