#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
        int n,c=0,p=0,a=0 ;
        scanf("%d",&n);
        for(int i=1,a=0;i<=n;i++,p=0)
        {
            if(n%i==0)
            {
                c++ ;
                for(int j=1;j<=i ;j++)
                if(i%j==0)
                { 
                    p++ ;
                    if(p>2)
                    {
                        break ;
                    }
                    if(p==2)
                    {
                        a++ ;
                    }
                }
            } 
        }
            printf("number= %d  factors= %d primefactors %d\n",n,c,a) ;
       
    }






    return 0 ;
}