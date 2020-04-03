#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x=0,y=0,i=0;
        scanf("%d",&n);
        char a[1001];
        scanf("%s",a);
        
        if(a[i]=='L')
        x--;
        else if(a[i]=='R')
        x++;
        else if(a[i]=='U')
        y++;
        else if(a[i]=='D')
        y--;
        
        for(i=1;i<n;i++)
        {
            if(a[i]=='L'){
        if((a[i]=='L' && a[i-1]=='L')||(a[i]=='L'&& a[i-1]=='R'))
        continue;
        else
        x--;}
        
        if(a[i]=='R'){
        if((a[i]=='R' && a[i-1]=='R')||(a[i]=='R'&& a[i-1]=='L'))
        continue;
        else
        x++;}
        
        if(a[i]=='U'){
        if((a[i]=='U' && a[i-1]=='U')||(a[i]=='U'&& a[i-1]=='D'))
        continue;
        else
        y++;}
        
        if(a[i]=='D'){
        if((a[i]=='D' && a[i-1]=='D')||(a[i]=='D'&& a[i-1]=='U'))
        continue;
        else
        y--;}

        }

        printf("%d %d\n",x,y);  
         
    }
    
    return 0;
}



   
    