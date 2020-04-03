#include<stdio.h>
#include<stdlib.h>
#define loop(n) for(int i=0;i<n;i++)
#define modulo 1000000007
int main()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
        int n ;
        scanf("%d",&n);
        long int  *price,max,profit=0,a ;
        price = (long int*)malloc(n*sizeof(long int)) ;

        loop(n)
        {
            scanf("%ld",&price[i]) ;
        }
       
        loop(n)
        {
            for (int j = i + 1; j < n; ++j) 
            {
                if (price[i] < price[j]) 
                {
                    a = price[i];
                    price[i] = price[j];
                    price[j] = a;
                }
            }
        }

        loop(n)
        {
            if(price[i]-i<0)
            {
              break;  
            }
                profit =price[i]-i+profit;

        }
         printf("%ld\n",profit%modulo) ;
    }
    return 0 ;
}