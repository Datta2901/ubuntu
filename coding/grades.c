#include<stdio.h>
int main()
{
    printf("Enter the marks");
    int n ;
    scanf("%d",&n);
    if(9<n && n<=10)
    printf("grade u scored is 'A'");
    else if(8<n && n<=9)
    printf("grade scored is 'B'");
    else if(7<n && n<=8)
    printf("6<n && n<=7");
    else if(n>10 )
    printf("please enter valid marks");
    else
    {
        printf("failed");
    }
    
return 0 ; 
}