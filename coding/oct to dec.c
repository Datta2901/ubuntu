#include<stdio.h>
int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
}
int main()
{
    printf("Enter the number");
    int n,a,c,i ;
    scanf("%d",&n);
    for(i=0,c=0;n>0;n=n/10,i++)
    {
        a =n%10 ;
        c =((power(8,i))*a)+c ;
        printf("%d %d",a,c);
    }
    printf("the required decimalnumber = %d",c);
    return 0 ;
}