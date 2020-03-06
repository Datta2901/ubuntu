#include<stdio.h>
int main()
{
    printf("Enter the string");
    char str[100];
    int i,j,k;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        k=1 ;
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
            k++ ;
        }
        printf("%c appears %d times in the given string \n",str[i],k);
    }
    return 0 ;
}