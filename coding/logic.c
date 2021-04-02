#include<stdio.h>
int main()
{
  printf("Enter a number");
  long int n,i,a,c,s=0;
  scanf("%ld",&n);
  for(i=1;i<=n;i++)
  {
        for(a=0,c=0;c<=i-1;c++)
        { 
            a=a*10+i ;
            s=s+a ;
        }
     printf("%ld+",a);     
   }
    printf(" = %ldthe sum of numbers given in given series\n",s);  
 return 0 ;
}