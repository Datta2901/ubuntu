#include<stdio.h>
#include<string.h>
void main ()
{
    char a[10],b[10];
    int n,i;
    printf("enter the limit of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    strcpy(a,b);
    strrev(a);
    if(strcmp(a,b)==0)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    
return 0;

}