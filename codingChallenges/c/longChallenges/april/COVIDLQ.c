#include<stdio.h>
#include<stdlib.h>
#define loop(n) for(int i=0;i<n;i++)
int main()
{
    int t ;
    scanf("%d",&t) ;
    while(t--)
    {
        int n,a,c=0 ;
        scanf("%d",&n) ;
        int *stand ;
        stand =(int*)malloc(n*sizeof(int)) ;
        loop(n)
        {
            scanf("%d",&stand[i]) ;
        }
        loop(n)
        {

            if(stand[i]==1&& (stand[i-1]!=1||i==0))
            {
                for(i=0;i<5;i++)
                {    if(stand[i+1]==1)
                    {
                        c++ ;
                        break ;
                    }
                }    
            }
            if(c!=0)
            {
                break ;
            }
            if(c==0)
            {i=i+4 ;}
        }
        if(c==0)
        {
            printf("YES\n") ;
        }
        else
        {
            printf("NO\n") ;
        }
        
        
    }
    return 0 ;
}