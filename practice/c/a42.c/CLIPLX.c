#include<stdio.h>
int points ,matches ;
void input()
{
   
   scanf("%d",&points) ;
   scanf("%d",&matches);
}
int win(int a,int b)
{
    int win ;
    if(a<=b)
    {
        win=0 ;
    }
    else if(a==2*b)
    {
        win=b ;
    }
    else
    {
        win=a%b ;
    }
   return win ; 
}
int main()
{
    int t,c ;
    scanf("%d\n",&t) ;
    while(t--)
    {
        input() ;
        c=win(points,matches) ;
        printf("%d\n",c) ;
    }
return 0 ;
}