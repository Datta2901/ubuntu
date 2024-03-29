#include<stdio.h>
 
int addOne(int x)
{
  int m = 1;
 
  /* Flip all the set bits until we find a 0 */
  while( x & m )
  {
    x = x^m;
    m <<= 1;
  }
 
  /* flip the rightmost 0 bit */
  x = x^m;
  return x;
}
 
/* Driver program to test above functions*/
int main()
{
  int x;
  scanf("%d",&x);
  printf("%d", addOne(x));
 // getchar();
  return 0;
}

