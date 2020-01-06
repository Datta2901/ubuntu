#include<stdio.h>
int main()
{
    int i,c=0,d=0;
    char str[4];
    scanf("%s",str);
    for(i=0;i<4;i++)
    {
        if(str[0]==str[i])
        c++ ;
        else if(str[1]==str[i])
        d++ ;
    }
    if(c==2&&d==2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}