#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
        int a,c=0,i ;
        scanf("%d",&a);
        int b[6]={100,50,10,5,2,1} ;
        for(i=0;i<5;i++)
        {
            c=c+(a/b[i]) ;
            a=a%b[i] ;
        }
        printf("%d\n",c);
    }
    return 0 ;
}