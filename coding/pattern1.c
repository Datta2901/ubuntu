#include<stdio.h>
int main()
{
    printf("enter the number 1 22 333 4444");
    int n,i,j ,c;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(i=0;i<j;i++)
         {
             printf("%d",j);
         }
     printf("\n");    
    }
 for(j=1,c=n-1;j<=n;j++,c--)
    {
        for(i=n;i>j;i--)
         {
             printf("%d",c);
         }
    printf("\n");       
    }
  return 0 ;   
}      