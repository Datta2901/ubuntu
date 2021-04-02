#include<stdio.h>
#include<math.h>
int a,b,n ;
int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    else
        return x*power(x, y/2)*power(x, y/2); 
} 
int calculation(int a,int b,int n)
{
  int r ;
  r = power((a+b),n);
  return r ;
}
int main()
{
  printf("enter the value a,b,n") ; 
  int s ;
  scanf("%d%d%d",&a,&b,&n);
  s = calculation(a,b,n);
  printf("%d",s);
}