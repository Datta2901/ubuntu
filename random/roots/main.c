#include"roots.h"
int main()
{
    //  printf("Enter the coefficients of the quadratic equation");
    stdin =fopen("readme","r");
    int a,b,c;float g,o ;
    scanf("%d%d%d",&a,&b,&c);
    g =find_root(a,b,c) ;
    o =find_root1(a,b,c) ;
    printf("%f%f",g,o);  
 }