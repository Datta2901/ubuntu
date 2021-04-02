#include<stdio.h>
int main()
{
    printf("Enter the size of the array");
    int i,n,list[n],key;
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
    printf("enter the number which u want to search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(list[i] ==key)
        {
            printf("the key is found\n" );
            break ;
        } 
    }
    if(i==n)
    printf("the key is not found \n");

return 0 ;
}
