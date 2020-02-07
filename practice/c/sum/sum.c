#include<stdio.h>
int main()
{
    printf("Enter the no.of test cases\n");
    int t;
    scanf("%d",&t);
    printf("Enter the number\n");
    int a,b,i,s=0 ;
    while(t--)
    {
        scanf("%d%d",&a,&b);
        for(i=1;i<=a*b;i++)
        {
            s=s+i ;
        }
        printf("%d\n",s);
    }
}