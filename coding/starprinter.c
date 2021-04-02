#include <stdio.h>

int main()
{
    printf("Enter how many times you want to print * ") ;
    int num ;
    scanf("%d",&num) ;
    int answer = 0;
    while (answer  < num)
     { 
        printf("* ") ;
        answer = ++answer ;
     }
     printf("\n");
    return 0 ;   
} 