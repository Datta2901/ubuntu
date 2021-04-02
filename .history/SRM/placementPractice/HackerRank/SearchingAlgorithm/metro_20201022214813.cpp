#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct points
    {
    long int r;
    long int c1;
    long int c2;
};

typedef struct points points;

int comp(const void* a,const void* b)
    {
    points* a1=(points*)a;
    points* b1=(points*)b;
    if((a1->r)!=(b1->r))
    return (a1->r)-(b1->r);
    else
        {
        if((a1->c1)!=(b1->c1))
       return (a1->c1)-(b1->c1);
        else
           return (a1->c2)-(b1->c2);
    }
}

long int min(long int a,long int b)
{
    if(a<b)
        return a;
    return b;
}

long int max(long int a,long int b)
    {
    if(a>b)
        return a;
    return b;
}

int main() {

 long int n,m,r,c1,c2,temp,r_s,r_e;
    int k,i,j;
    scanf("%ld %ld %d",&n,&m,&k);
    points p[k];
    for(i=0;i<k;i++)
        scanf("%ld %ld %ld",&p[i].r,&p[i].c1,&p[i].c2);
    qsort(p,k,sizeof(p[0]),comp);
    int visited[k];
    memset(visited,0,sizeof(visited));
    long long ans=n*m;
    for(i=0;i<k;i++)
        {
        long int sub=0;
        if(visited[i]==0){
        for(j=i+1;j<k;j++)
            {
            if(p[i].r==p[j].r)
                {
               if(p[i].c2<p[j].c1)
                  {
                   sub+=p[i].c2-p[i].c1+1;
                   p[i].c1=p[j].c1;
                   p[i].c2=p[j].c2;
               }
                else
                    {
                    r_s=min(p[i].c1,p[j].c1);
                    r_e=max(p[i].c2,p[j].c2);
                    p[i].c1=r_s;
                    p[i].c2=r_e;
                }
                visited[j]=1;
            }
            else
                break;
        }
            ans-=sub;
        ans-=(p[i].c2-p[i].c1+1);
        }
    }
    printf("%lld",ans);
    return 0;
}