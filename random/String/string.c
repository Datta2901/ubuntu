#include<stdio.h>
int main()
{
    int i;
    char arr[4][30] ;
    for(i=0;i<4;i++)
    {
        scanf("%s",arr[i]);
        
    }
       for(i=4;i>=0;i--)
       {
    printf(" %s",arr[i]);
       }
       printf("\n");
    return 0 ;
}