#include<stdio.h>
int main()
{
    printf("Enter a number");
    int n,i,j,a,b,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++,a=0,s=0)
    {
        for(j=0,a=1,b=0;j<i;b=a,b=s,j++)
       {
              s=a+b ;
              printf("%d",s);
              
       }
     printf("\n"); 
    }







}