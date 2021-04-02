#include<stdio.h>
int sqrt(int x)
{
    if (x == 0 || x == 1) 
                return x; 
    
            int i = 1, result = 1; 
            
            while (result <= x)  
            { 
                i++; 
                result = i * i; 
            } 
            return i - 1; 
} 

 
int find_root (int a ,int b,int c)
{
    
    int d,i;float e,h ;
    d =-b+ sqrt((b*b)-(4*a*c)) ;
    e=d/(2*a) ;
    return (e);
}
int find_root1(int a ,int b,int c)
{
    
    int d,i;float e,h ;
    i =-b- sqrt((b*b)-(4*a*c)) ;
    e=i/2 ;
    return (e);
}
int main()
{
    printf("Enter the coefficients of the quadratic equation");
    int a,b,c;float g,o ;
    scanf("%d%d%d",&a,&b,&c);
    g =find_root(a,b,c) ;
    o =find_root1(a,b,c) ;
    printf("%f%f",g,o);  
 }