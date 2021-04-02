#include<stdio.h>
int main()
{
    printf("Enter a number");
    int n ,i,j ;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
         for(i=0;(2*j-1)>i;i++)
        { printf("*");}
     printf("\n");
    }
return 0 ;
}