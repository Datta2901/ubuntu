#include<stdio.h>
int main()
{
    printf("Enter the number if landline press1\n");
    int t;
    scanf("%d",&t);
    if(t==1)
    {   printf("Enter the phone number");
        char str[10];
        scanf("%s",str);
        printf("+91-");
        printf("%s\n",str);
    }
    else
    {
        char arr[10],i,j;
        printf("Enter the landline number");
        scanf("%s",arr);
        printf("+91-");
        for(i=0;i<4;i++)
        {
            printf("%c",arr[i]);
        }
        printf("-");
        for(j=4;j<10;j++)
        {
            printf("%c",arr[j]);
        }
    printf("\n");
    }
    return 0 ;
}