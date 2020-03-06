#include<stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
         long int n,j,ele,i ;
        scanf("%ld",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%ld",&arr[i]);
        }
        ele=arr[0];
        for(i=0;i<n;i++)
        {
            if(ele<arr[i])
            {
                ele=arr[i];
            }
        }
        printf("%ld\n",ele);
    }
}