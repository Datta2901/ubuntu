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
    int n,a,b,i,c;
    scanf("%d",&n);
    for(i=0,c=0;n>0;i++,n=n/8)
    {
     a=n/8 ;
     b=n%8 ;
     c=((power(10,i))*b)+c;
    printf("%d %d \n",a,b);
    }
printf("the required octal number=%d\n",c);
    return 0 ;
}