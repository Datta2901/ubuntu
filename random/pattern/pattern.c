#include "pattern.h"
void createPattern () {
    printf("Enter a number1");
    printf("Enter a number2");
    printf("Enter a number3");
    int n ,i,j ;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
          for(i=0;(2*j-1)>i;i++)
        { 
             printf("*");
        }
        printf("\n");
    }
}