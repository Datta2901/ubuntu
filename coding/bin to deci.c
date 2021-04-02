#include<stdio.h>
#include<math.h>
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
    printf("Enter the binary number");
    int n,a,b,c,i ;
    scanf("%d",&n);
    for(i=0,c=0;n>0;i++,n=n/10)
    {
        a =n%10 ;
    c =(power(2,i))*a+c ;
    printf("%d %d",a,c) ;
    }
printf("the required decimal number = %d \n",c);
return 0 ;
}  