#include<stdio.h>
int main()
{
    printf("three lines");
    int a,b,c,d;
    float e ;
    scanf("%d%d%d",&a,&b,&c);
    if(a == 4 || 5)
    {
       d = b * c ;
       e = d +d*(20/100) ;
       printf("%f",e);
    }
    else
    {
        d = b*c ;
        printf("%d",d);
    }
   return 0 ;
}