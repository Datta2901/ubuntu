#include<stdio.h>
int main()
{
    printf("Enter the no.of rounds");
    int t ;
    scanf("%d",&t);
    int a,b ,c,s=0,d=0,e,i=0,j=0,m;
    int arr[t] ;
    printf("Enter the scores of the players");
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            c=a-b ;
            s++ ;
        }
        else
        {
           c=b-a ;
           d++ ;
        }
        if(i==0)
         {m=c ;}
        if(c>m)
        { m=c ;}
        i++ ;
    }
    if(s>d)
    printf("player 1 %d\n",s);
    else if(s<d)
    {
        printf("player 2 %d\n",d);
    }
    printf("%d\n",m);   
return 0 ;
}