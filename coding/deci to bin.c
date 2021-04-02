#include <stdio.h>
#include <math.h>
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
    printf("Enter the number which you want to convert");
    int n,i,a,b,c,p,e;
    scanf("%d",&n);
    for(a=0,c=0,i=0;n>0;n=n/2,i++)
    {
      a = n/2 ;
      b = n%2 ;
      printf("a=%d  b=%d ",a,b);
      c= ((power(10,i))*b)+c;
      printf("c=%d\n",c);
    }
  printf("   The required binary number is %d\n",c);
 return 0 ;   
}