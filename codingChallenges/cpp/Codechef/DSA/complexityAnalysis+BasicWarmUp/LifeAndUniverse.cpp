#include<stdio.h>
int main()
{
    int j=1,a ;
    while(j!=2)
    {
        scanf("%d",&a) ;
        if(a!=42)
        printf("%d\n",a);
        else
        {
            j=2 ;
        } 
    }
    return 0 ;
}