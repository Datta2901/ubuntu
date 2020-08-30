#include<stdio.h>
int main()
{
    int x=3,y,z,e;
    z=y=x=e;
    z*=y=x*x=e*e;
    printf("x=%d y= %d  z=%d",x,y,z);
    return 0;
}