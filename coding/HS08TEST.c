#include<stdio.h>
int main ()
{
   int X;float Y ;
   scanf("%d%f",&X,&Y);
    if(X%5 == 0 && Y>= X+0.50)
    {
        float answer ;
        answer = Y - X -0.50 ;
        printf("%f",answer);
    }
    else
    {
        printf("%f",Y);
    }
    return 0 ;
}