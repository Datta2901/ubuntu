#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
        int a,c=0;
        scanf("%d",&a);
        for(int i=1;i<a;i++)
        {
            if(a%i==0)
             c++ ;
             if(c>1)
             break ;
        }
        printf("%d",c);
        if(c==1)
        {
            printf("yes\n");
        }
        else 
        {
           printf("no\n") ;
        }
        
    }
}