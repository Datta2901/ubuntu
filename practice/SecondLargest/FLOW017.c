#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c ;
        scanf("%d%d%d",&a,&b,&c);
        if((a>b ||c>b) &&(b>c||b>a))
        {
            printf("%d\n",b);
        }
        else if((b>a||c>a) &&(a>c||a>b))
        {
            printf("%d\n",a);
        }
        else if((a>c||b>c) &&(c>b||c>a))
        {
            printf("%d\n",c);
        }   
    }
    return 0 ;        
}