#include<stdio.h>
int main()
{
    int n1,n2,a=0,b,c,e,d,i,j;
    scanf("%d%d",&n1,&n2);
    printf("%d %d\n",n2,n1);
    for(j=0;b>1;n2=n2/10)
    {    
        b= n2/10 ;
    } 
    printf("%d",j+2);
    for(e=n2/(16^(j+2));a>0;e=e*16)
    {
        a=e%16 ;
        if(a<10)
       {
            printf("%d",a);
       }    
        else
        {
           if (a==10)
           printf("A");
           else
             if(a==11)
             printf("B");
            else
             if(a==12)
             printf("C");
            else
            if(a==13)
            printf("D"); 
            else
            if(a==14)
            printf("E");
            else
            printf("F");
        }   
     }

    for(c=0;i<0;c++,n1=n1/10)
    {
       i= n1/10 ;
    }
    for(n1=n1/(16*c);a<0;n1=n1*16)
    { 
        a=n1%16 ;
        if(a<10)
       {
            printf("%d",a);
       }    
        else
        {
           if (a==10)
           printf("A");
           else
             if(a==11)
             printf("B");
            else
             if(a==12)
             printf("C");
            else
            if(a==13)
            printf("D"); 
            else
            if(a==14)
            printf("E");
            else
            printf("F");
        } 
    }
   
    
}   


