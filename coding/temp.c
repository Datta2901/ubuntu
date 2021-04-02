#include<stdio.h>
typedef float fahrenheit[100] ;
typedef float celsius[100] ;
void convert(fahrenheit,celsius,int);
int main()
{
    fahrenheit f;
    celsius c;
    int i ;
    for(i=0;i<100;i++)
    {
        scanf("%f",&f[i]);  
    }
    for(i=0;i<100;i++)
    {
       converter(f,c,100);
       printf("%f",c[i]);
    }   
return 0 ;
)
void convert(fahrenheit fah,celsius cel,int)
{
    int i ;
    for(i=0;i<100;i++)
    cel[i] = (fah[i]-32)/1.8 ;
    
}
    