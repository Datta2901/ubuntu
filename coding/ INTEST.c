#include<stdio.h>
int main ()
{   
    int n,k ;
    scanf("%d%d",&n,&k);
    while(n--)
    {
        int t,count = 0 ;
        scanf("%d",&t);
        if(t % k == 0)
        {
          count = count +1 ;  
        }
        printf("%d",count);
    }
    
        return 0 ;
}