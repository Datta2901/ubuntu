#include<stdio.h>
int main ()
{
    printf("ENTER MAX VALUE >7");
    int n,i,s=17,p=210;
    scanf("%d",&n);
    printf("2 3 5 7 ");
      for(i=8;i<=n;i++)
    {
        
        if(i%2 !=0 && i%3 !=0 && i%5 != 0 && i%7 !=0 )
        {
            printf("%d ",i);
            s =s+i ;p=p*i ;
            
        }           
        else
        {  
        i = i ;
        
        }
      
    }
    printf("sum = %d",s);
    printf("product = %d",p);
    return 0 ;
}