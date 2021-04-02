#include<stdio.h>
int main()
{
    printf("enter the number");
    int a,b,n,i,j ;
    char str[100];
    scanf("%d",&n);
    for(i=0;n>0;n=n/16,i++)
    {
            a = n%16 ;
        if(a<10)
        str[i] = a + 48 ;
        else
        {
            str[i]=a+55 ;
        }
    }
    for(j=i;j>=0;j--)
    {
        printf("%c",str[j]);
    }
}