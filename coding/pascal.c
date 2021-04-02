#include<stdio.h>
int main()
{
    printf("Enter the number");
    int num,i,j,a=1,b=1,c;
    scanf("%d",&num);
    printf("1\n");
    for(j=1;j<num;j++)
    {
        for(i=0,c=0;i<j;i++,c=a)
        {
         printf("%d%d",a+c,b+a) ;
        }
        printf("\n");
    }
return 0 ;
}