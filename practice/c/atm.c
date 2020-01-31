#include<stdio.h>
#include<math.h>
int main()
{
    printf("withdrawal amount and available balance");
    int a,d ;
    float b,c ;
    scanf("%d",&a);
     scanf("%f",&b);
d=pow(a,2);
    if(a<b &&a%5==0)
    {
        c=b-a-0.50 ;
        printf("%.2f\n",c);
    }    
    else
    {
        printf("%f\n",b);
    }
  printf("%d",d) ; 
}