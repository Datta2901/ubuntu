#include<stdio.h>
int main()
{
    printf("Enter the no.of test cases\n");
    int t ;
    scanf("%d",&t);
    while(t>0)
     {  
        printf("Enter the two number\n");
        int a, b;
        scanf("%d%d",&a,&b);
        printf("%d\n",(a%b));
        t-- ;
     }   
    return  0;
}