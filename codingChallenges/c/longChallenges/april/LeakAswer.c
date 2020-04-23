#include<stdio.h>
#include<stdlib.h>
int main()
{  
    //stdin =fopen("file","r") ;
    int t,questions,answers,sets,max,a=1 ;
    
    scanf("%d",&t) ;
    while(t--)
    {
        scanf("%d",&questions);
        scanf("%d",&answers);
        scanf("%d",&sets);
        int arr[sets],*count ;
        
           for(int j=0;j<questions;j++)
            {    
                count=(int*)malloc((answers+1)*(sizeof(int))) ;
                for(int i=0;i<sets;i++)
                {
                    scanf("%d",&arr[i]) ;
                    count[arr[i]]=count[arr[i]]+1 ;
                }
                max=count[1] ;
                for(int i=2;i<=answers;i++)
                {
                    if(count[i]>max){
                        max=count[i] ;
                        a=i ;
                    }
                }
                printf("%d ",a) ;
            }    
           
    }

}