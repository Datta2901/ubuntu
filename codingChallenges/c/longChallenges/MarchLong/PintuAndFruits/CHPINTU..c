#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int testcase,a,b,c ;
    printf("Ente no.of test cases\n");
    scanf("%d",&testcase);
    while(testcase--)
    {
        int n,m,i,j,k,s=0,d,ele;
        bool skipFlag;
        printf("enter the no.of types values\n");
        scanf("%d",&n);
        scanf("%d",&m);
        int *type,*numb,*total;
        type = (int*)malloc(n*sizeof(int));
        numb = (int*)malloc(n*sizeof(int));
        total = (int*)malloc((m+1)*sizeof(int));
        int *arr ;
        arr =(int*)malloc((m+1)*sizeof(int));
       


        for(i=0;i<n;i++)
        {
            scanf("%d",&type[i]); // fruit type
        } 

 for(i=0;i<n;i++)
        { 
          arr[type[i]] = 1;
        }

        for(j=0;j<n;j++)
        {
            scanf("%d",&numb[j]);// prices
        }
       
        for(i=0;i<n;i++)
        {
           s=numb[i] ;
           skipFlag = false;
            for (k=i-1;k>=0;k--){
                if(type[k] == type[i]){
                    skipFlag = true ;
                    break;
                }
            }
            if (skipFlag){
                continue;
            }
            for(j=i+1;j<n;j++)
            { 
                    
                    if(type[i]==type[j])
                    {
                         s=s+numb[j] ;
                    }
            } 
            total[type[i]]=s ; 
        }
        

        ele=2600;
        for(i=1;i<=m;i++)
        {

            if(ele>total[i] && arr[i] == 1 )
            {
                ele=total[i] ;
            }
        }
        printf("\n%d\n",ele) ;
     
      }  
    
return 0 ;
}