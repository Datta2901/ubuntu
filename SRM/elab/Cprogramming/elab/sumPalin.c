#include<stdio.h>
int reverse_num(int i)
{
    int answer,a ;
      for (answer= 0 ;i !=0;i=i/10)
      {   
          a = i%10 ;
          answer=answer*10+ a ;
      }
      printf("answer=%d",answer);
      return answer ;
}
int main()
{ 
    printf("Enter the test cases");
    int t;
    scanf("%d",&t); 
    while(t--) 
    { 
     int a,b,c,i,j,s,p ;
     printf("Enter the two numbers");
      scanf("%d%d",&a,&b); 
      for(i=a,s=0;i<b;i++) 
      {     
          p = reverse_num(i);
          printf("p=%d\n",p);
            if(i==p) 
            { 
                s=s+i ;
                printf("sum srr%d\n",s);
            }

        } 
             printf("s=%d\n",s);
    }
               
     return 0 ;
}