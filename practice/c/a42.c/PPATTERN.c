#include<stdio.h>
int main()
{
   int t ;
   scanf("%d",&t) ;
   int n ,a=1 ;
   while(t--)
   {
       scanf("%d",&n);
        int arr[n][n] ;
       for(int i=0;i<n;i++)
       {
            for(int j=0;j<n;j++)
            {
                 arr[i][j]=a++ ;
                    printf("%d",arr[i][j]);
                   
            }
       }
   }
   return 0 ;
}