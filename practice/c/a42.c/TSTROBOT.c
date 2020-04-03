#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t) ;
    while(t--)
    {
        int size ,answer,a,b;
        scanf("%d",&size) ;
        int point ;
        scanf("%d",&point) ; 
        char str[size] ;
        scanf("%s",str) ;
        a=point ;
        b=point ;
        for(int i=0;i<size ;i++)
        {
            if(str[i]=='L')
            {
               point-- ;
            }
            else
            {
                
                point++ ;
            }
             if(a<point)
            {
            a=point ;
            }    
        if(b>point)
            {
            b=point ;
            }
        }
       
    printf("%d\n",a-b+1) ;    
    }
    return 0 ;
}
/*#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,i,max,min;
        char s[100];
        scanf("%d%d",&n,&x);
        scanf("%s",s);
        max=x;
        min=x;
        for(i=0;i<n;i++)
        {
            if(s[i]=='L')
            x--;
            else
            x++;
            if(x>max)
            max=x;
            if(x<min)
            min=x;
        }
        printf("%d\n",max-min+1);
    }
    return 0;
}*/


