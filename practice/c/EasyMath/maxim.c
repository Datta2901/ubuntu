#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t,c,n ;
    char  arr[550] ;
    scanf("%d",&t) ;
    while(t--)
    {
       
           
        //    fgets(arr,550,fopen("readtxt","r")) ;
           fgets(arr,550,stdin) ;
       
            // scanf("%[^\n]%*c",arr);
        
            printf("%s  \n",arr);
            strtok(arr) ;
            c=strlen(arr) ;
            n=((c-1)/2)-1 ;
            int  max =
            
            
            
             ;
            for(int i=1;i<c;i+=2)
            {
                if(arr[i]>max)
                {
                    if(max!=n)
                    {
                        max=arr[i] ;
                    }

                }
            }
        printf("%d",max) ;
      
    }
}/*#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       long long int g,i=0,a[51],j;
       char ch='a';
        while(ch!='\n')
       {
           scanf("%lld%c",&a[i++],&ch);
           
           
       }
       ch='a';
       for(j=0;j<i;j++)
       {
           if(a[j]==i-1)
           {
               a[j]=0;
               break;
           }
       }
       
        

    
        g=a[0];
        for(j=1;j<i;j++)
        {
            if(g<a[j])
            g=a[j];
        }
        printf("%lld",g);
        
       
        
        printf("\n");
    }
    return 0;
}*/