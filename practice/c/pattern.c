#include<stdio.h>
int main()
{
    int n,k ;
    scanf("%d",&n) ;
     for(int i=0;i<n;i++)
    {  
        for(int k=n ,j=0;j<n+2;j++)
        {
        
           printf("%d",i);   
        }
        printf("\n");
    }
    return 0 ;
}