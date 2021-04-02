#include<stdio.h>
int main ()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
         int a,b = 1;long double n = 1;
         scanf("%d",&a);
         while(b<=a) 
         {
            n = n * b  ;
            b++ ;
        }
           printf("%Lf\n",n) ;
         
     }
    return 0 ;
}
