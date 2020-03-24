#include<stdio.h>
int main()
{
    int t,n,k,i,j,x,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        char a[n];
        for(i=0;i<n;i++)
        {
            scanf("%c",&a[i]);
        }
        for(j=1;j<=k;j++)
        {
            for(i=n-1;i>=n-k;i--)
            {
                if(a[i]=='T')
                {
                    a[i]=a[i+1];
                }
                else if(a[i]=='H')
                {
                    for(x=0;x<i;x++)
                    {
                        if(a[x]=='H')
                        {
                            a[x]='T';
                        }
                        else if(a[x]=='T')
                        {
                            a[x]='H';
                        }
                    }
                }
                a[i]=a[i+1];
            }
        }
        count=0;
        for(j=0;j<n-k;j++)
        {
            if(a[j]=='H')
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
