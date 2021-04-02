#include<stdio.h>
int main()
{
    int i,j,c=1,n ;
    printf("Enter the number you want 1 23 345 6789  ");
    scanf("%d",&n);
    for(j=1;j<n;j++)
    {
  
        for(i=1;i<=j;i++)
        {
          printf("%d",c++) ;
        
        }
       printf("\n"); 
    }   
   return 0 ;  

}