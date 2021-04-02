#include<stdio.h>
int main()
{
   printf("Enter a number");
   int n ,i,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      printf("#");
   }
return 0 ;
}