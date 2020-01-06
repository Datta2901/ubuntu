#include<stdio.h>
int main()
{
    int i,j ;
    printf("Enter the size of the Array");
    int n ;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int a ;
    for(i=0;i<n;i++)
    {
        a =str[i];
        if((65<=a&&a<=90)||(a>=97&&a<=122))
        printf("%c",str[i]);
        else
        {
            ;
        }
    }
}