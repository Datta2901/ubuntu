#include<stdio.h>
#include<stdlib.h>
#define loop(n) for(int i=0;i<n;i++)
int main()
{
    int t ;
    scanf("%d",&t) ;
    while(t--)
    {
        int n,c=0 ;
        scanf("%d",&n) ;
        int *stand ;
        stand =(int*)malloc(n*sizeof(int)) ;
        loop(n)
        {
            scanf("%d",&stand[i]) ;
        }
        for(int i=0;i<n;)
        {
            if(stand[i]==1)
            { 
                printf("%d",i) ;
                for(int j=i;j<5;j++)
                {    if(stand[j+1]==1)
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
            printf(" i= %d\n",i) ;
            if(c==0)
             if(i+6<n)
            {i=i+5 ;}    
             printf(" %d",i) ;
           
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