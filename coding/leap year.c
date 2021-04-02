#include<stdio.h>
int main()
{
    printf("Enter a year 2000<year<2100");
 int n,a ;
    scanf("%d",&n);
    if(n%100 ==0)
        if(n%400==0)
        printf("year is leap year");
        else
        {
            printf("not a leap year");
        }
    
    else
    if( n%4== 0) 
    {
        printf("year is  leap year");
    }
   
     else 
   printf("year is not a leap year");
    
return 0 ;
}