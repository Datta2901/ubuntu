#include<stdio.h>
int main()
{
    int t ;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0,l=0,m=0,o=0,p=0,q=0,r,s,u,v,w,x,y,z ;
    scanf("%d",&t);
    while(t--)
    {
        int n,i ;
        scanf("%d",&n);
        int arr[n];
        char str[n];
        for(i=0;i<2*n;i++)
        {
            scanf("%c",&str[i]);
            scanf("%d",&arr[i]);
            printf("%c%d\n",str[i],arr[i]);
        }
    
        for(i=0;i<n;i++)
        
        {

          if(str[i]=='A')  
                if(arr[i]==12) 
                a++ ;
                else if(arr[i]==3)
                b++ ;
                else if(arr[i]==6)
                c++ ;
                else if(arr[i]==9)
                d++ ;

           else if(str[i]=='B')  
                if(arr[i]==12) 
                e++ ;
                else if(arr[i]==3)
                f++ ;
                else if(arr[i]==6)
                g++ ;
                else if(arr[i]==9)
                h++ ;

            else if(str[i]=='C')  
                if(arr[i]==12) 
                j++ ;
                else if(arr[i]==3)
                k++ ;
                else if(arr[i]==6)
                l++ ;
                else if(arr[i]==9)
                m++ ; 

            else if(str[i]=='D')  
                if(arr[i]==12) 
                o++ ;
                else if(arr[i]==3)
                p++ ;
                else if(arr[i]==6)
                q++ ;
                else if(arr[i]==9)
                r++ ;
        }         
        // for 12 clock
        if(a>e && a>j && a>o)
        s=a;
        else if(e>a && e>j &&e>o)
        s=e;
        else if(j>a &&j>e && j>o)
        s=j;
        else if(o>a && o>e && o>j)
        s=o ;
        // for 3 clock
        if(b>f && b>k && b>p)
        t=b ;
        else if(f>b && f>k && f>p)
        t=f;
        else if(k>b && k>f && k>p)
        t=k ;
        else if(p>b && p>k && p>o)
        t=p ;
        // for 6 clock
        if(c>g && c>l && c>q)
        u=c;
        else if(g>c && g>l && g>q)
        u=g;
        else if(l>c && l>g && l>q)
        u=l ;
        else if(q>c && q>l && q>g)
        u=q ;
        // for 9 clock
        if(d>h && d>m && d>r)
        v=d ;
        else if(h>d && h>m &&h>r)
        v=h ;
        else if(m>d && m>h && m>r)
        v=m ;
        else if(r>d && r>h && r>m)
        v=r ;
        // which is most 
        if(s>t && s>u && s>v) 
        { 
            w=s;
                if(t>u && t>v)
                {  
                    x=t ;
                    if(u>v)
                    {
                        y= u ;
                        z=v ;
                    }
                    else
                    {
                      y=v ;
                      z=u  ;
                    }
                    
                  }
                else if(u>t && u>v) 
                {
                     x=u ;
                     if(t>v)
                     {
                         y=t ;
                        z=v ;
                     }
                     else
                     {
                         y=v ;
                         z=t;
                     }
                     
                 }
        }            

        else if(t>s && t>u && t>v)
        {   
            w=t ;
                    if(s>u && s>v)
                    {
                        x=s;
                        if(u>v)
                        {
                           y=u ;
                           z=v ; 
                        }
                    }
                    else if(u>s &&)
    }}
        printf("a=%d\n",a);
    return 0 ;
}