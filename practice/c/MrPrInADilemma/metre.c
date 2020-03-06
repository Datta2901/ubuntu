#include<stdio.h>
int main()
{
    int testcase ;
    scanf("%d",&testcase);
    while(testcase--)
    {
        long long int arr[4],i ;
        for(i=0;i<4;i++)
        {
            scanf("%lld",&arr[i]);
        }    
        if(arr[0]==arr[1])
        {
            if(arr[3]==arr[2])
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }  
        }
        else if((arr[0]-arr[1])%(arr[2]-arr[3])==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0 ;
}