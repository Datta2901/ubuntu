#include<stdio.h>
int main()
{
    printf("Enter the test cases\n");
    int t;
    scanf("%d",&t);
    while(t--)
    {

        printf("Enter the two numbers\n");
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            printf(">");
        }
        else if(a<b)
        {
            printf("<");
        }
        else if(a==b)
        {
            printf("=");
        }
    }   
}