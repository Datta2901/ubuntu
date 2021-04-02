#include<stdio.h>
int main()
{
    printf("Enter anumber");
    int n,c,a,b ;
    scanf("%d",&n);
    c= n ;
    for(b=0;n!=0;n=n/10)
    {
     a = n % 10 ;
     b = b*10+a ;
    }


    if(b == c)
    {
        printf("Given number is palindrome\n");
    }
    else
    {
        printf("Given number is not a palindrome\n");
    }
return 0 ;
}

