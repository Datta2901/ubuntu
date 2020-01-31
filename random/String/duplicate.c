#include<stdio.h>
#include<string.h>
int main()
{
    char str[5],a;
    int i,j,d;
     scanf("%s",str);
     printf("%c",str[0]);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
        if(str[i]==str[j])
            {
               break ;
            }
        }
        if(j==i)
        printf("%c",str[j]);

    }
    printf("\n");
    return 0 ;
}