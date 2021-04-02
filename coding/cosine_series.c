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
    {
            for(i=1;i<=num;i++)
        {
            factorial =factorial*i ;
        }
    return factorial ;
    }
  
    
}
int cosinesum(int num,float x)
{
    int ele,sign=1,i;
    float sum=0 ;
    for(i=1;i<=num;i++,sign=-1)
    {
        ele =sign*power(x,2*i)/factorial(2*i) ;
        sum =sum +ele ;
    }
    return sum ;
}
int main()
{
    printf("enter the values of x ,n");
    int num;
    float x ,result;
    scanf("%f%d",&x,&num);
    result =cosinesum(num,x);
    printf("%f",result);
    return 0 ;
}   