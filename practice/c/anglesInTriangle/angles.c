#include<stdio.h>
int main()
{
    int  t ;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c ;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if(a > 0 && a < 180 && b > 0 && b < 180 && c > 0 && c < 180 && a+b+c==180)
        printf("YES\n");
        else
        {
        printf("NO\n");
        }
    }
    return 0 ;
}