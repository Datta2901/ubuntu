#include<stdio.h>
#define loop(n) for(int i=n;i>0;i--)
typedef int digits ;
int main()
{
  int t ;
  scanf("%d",&t) ;
  loop(t) 
  {
      int  num1,num2,sum,renum1=0,renum2=0,count=0;
      digits  a=0,b=0,c=0,d=0 ;
      scanf("%d",&num1);
      scanf("%d",&num2);
      sum=num1+num2 ;
      printf("%d\n",sum) ;
      if(num1<10 && num2<10)
      {
          printf("%d\n",sum) ;
          count++ ;
      }
      if(count==1)   
        {
         continue ; 
        }
      
      if(num1<10)
      {
         a=num1 ; 
         b=0 ;
      }
      else
      {
          a=num1%10 ;
          num1/=10 ;
          b=num1%10 ;
      }
      if(num2<10)
      {
          c=num2 ;
          d=0 ;
      }
      else
      {
          c=num2%10 ;
          num2/=10 ;
          d=num2%10 ;
      }
      
      
      if(a>c)
         renum1=10*a+c ;
      else if(c>a)
      {
          renum2=10*c+a ;
      }
      if(b>d)
      {
          renum2=10*b+d ;
      }
      else if(d>b)
      {
          renum2=10*d+b ;
      }
      printf("ist time %d %d %d\n",renum1,renum2,renum1+renum2);
      if(sum<renum1+renum2)  
      {
          sum=renum1+renum2 ;
         if(a>d)
          renum1=10*a+d ;
          else if(a<d)
          renum1=10*d+a ;
          if(b>c)
          renum2=10*b+c ;
          else if(c>b)
          renum2=10*c+b ;

          printf("2 nd time %d\n",renum1+renum2) ;
          if(sum>renum1+renum2)
          sum=renum1+renum2 ;
      }
      printf("final answer %d\n",sum) ;
  }
  return 0 ;
}