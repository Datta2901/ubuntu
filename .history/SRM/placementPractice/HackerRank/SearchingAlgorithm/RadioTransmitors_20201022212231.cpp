#include<bits/stdc++.h>
using namespace std;
int cmpfunc (const void * a, const void * b)
{
   return ( (int)a - (int)b );
}
int main(){
    int n; 
    int k,count=0,i,j,x_i; 
    scanf("%d %d",&n,&k);
    int *x = malloc(sizeof(int) * 100005);
    for(i=0;i<100005;i++)
        x[i]=0;
    for(i = 0; i < n; i++){
       scanf("%d",&x_i);
       x[x_i]=1;
    }
    for(i=0;i<100005;i++)
    {
        if(x[i]==1)
        {
            j=i+k;
            if(j>=100005)
                j=100004;
            for(;j>=i;j--)
            {
                if(x[j]==1)
                {
                    count++;
                    i=j+k;
                    break;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}