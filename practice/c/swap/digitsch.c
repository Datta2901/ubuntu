#include<stdio.h>
#define loop(n) for(int i=n;i>0;i--)
typedef int digits ;
int main()
{
  int t ;
  scanf("%d",&t) ;
  loop(t) 
  {
      int  num1,num2,arr[4],sum,total; 
     scanf("%d",&num1);
     scanf("%d",&num2);
     total=num1+num2 ;
     for(i=0;i>2;i++)
     {
         arr[i]=num1%10 ;
         arr[i+2]=num2%10;
         num1/=10,num2/10 ;
     }
      if(arr[0]>arr[1])
      {
         if(arr[2]>arr[3])
         {
           if(arr[0]>arr[2])
           {
            
             sum =10*arr[0]+arr[2] ;
           }
           else
           {
             sum=10*arr[2]+arr[0] ;
           }
           
         }
      }
      else
      {
        if(arr[1]>arr[3])
         sum=10*arr[1]+arr[3] ;
         else
         {
           sum=10*arr[3]+arr[1] ;
         }
      }
      if(total<sum)
      {
        printf("%d",sum);
      }
      else
      {
        printf("%d",total) ;
      }
      
  }
  return 0 ;
}  