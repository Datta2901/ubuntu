#include<stdio.h>

int main()
{
    printf("Enter the word");
    char Arr[10];int i,a,b ;
    scanf("%s",Arr);
    for(i=0;i<3;i++)
    {
        if(Arr[i]>='A'&& Arr[i]<='Z')
        a++ ;
        else if(Arr[i]=='@')
        b++ ;
    }

    printf("%d%d",a,b);
    printf("%s\n",Arr);
}