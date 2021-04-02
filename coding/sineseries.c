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
int factorial(int num)
{
    long int factorial=1;
    int i ;
    for(i=1;i<=num;i++)
    {
        factorial =factorial*i ;
    }
    return factorial ;   
}
int sinesum(int num,float x)
{
   int i, sign =1 ;
   float sum=0, element ;
   for (i=1;i<=num;i++,sign=-1)
   {
       element = sign * power(x,2*i-1)/factorial(2*i-1);
   sum =sum+element ;
   }
   return sum;
}
int main()
{
int n;
float x, sin_sum;
printf("Enter the values of x,n");
scanf("%f%d",&x,&n);
sin_sum =sinesum(n,x);
printf("sum of sine series =%f",sin_sum);
return 0 ;
}