#include<stdio.h>
#include<string.h>
int main()
{
    char str[10],rev[10];
    scanf("%s",str);
    int a,b;
    a=strlen(str);
    strcpy(rev,str);
    printf("%d\n",a);
    strrev(rev);
    printf("%s",rev);
    return 0;
}