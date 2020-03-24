#include<stdio.h>
#include<math.h>
int binary(int d )
{
    int f,i,e,g ;
    for(f=0,i=0;d>0;d=d/2,i++)
    {
            e = d/2 ;
            g = d%2 ;
            f= ((pow(10,i))*g)+f;
    }
return f ;
}
void count(int f)
{
    int m,count=0,eve=0,odd=0 ;
     for(f=f;f>0;f=f/10)
                {
                    m=f%10 ;
                    if(m==1)
                    {
                        count++ ;
                    }   
                } 
                // no.of ones are odd or even  
                if(count%2==0)
                {
                    eve++ ;

                } 
                else
                {
                    odd++ ;
                }
            
   return eve;
}
int main()
{
    int testcase ;
    scanf("%d",&testcase);
    while(testcase--)
    {
       int a,b,c,i,j,d,e,f,g,odd,eve ;
       scanf("%d",&a);
       scanf("%d,&c");
       int num[a],query[c] ;
    //  input
       for(i=0;i<a;i++)
       {
           scanf("%d",&num[i]);
       }
       for(i=0;i<c;i++)
       {
           scanf("%d",&query[i]);
       }
    // logic
        for(j=0;j<c;j++)
        {
            for(i=0;i<a;i++)
            {
                d=query[j]^num[i] ;
                f=binary(d) ;
                // =count(f) ;
            }
        } 
          
    }
    
    return 0 ;
}