#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the size of the string");
    int n ,i;
    scanf("%d",&n);
    char str[n] ;
    scanf("%s",str);
    for(i=n;i>=0;i--)
    {
        printf("%c",str[i]);
    }
return 0 ;
}
