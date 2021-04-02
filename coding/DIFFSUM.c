#include<stdio.h>
int main()
{  printf("enter two numbers");
    int N1,N2 ;
    scanf("%d%d",&N1,&N2);
    int answer ;
    if(N1 > N2)
        {
            answer = N1 - N2 ;
            printf("%d",answer) ;
            

        }
        else
        {  
            answer = N1 + N2 ;
            printf("%d",answer);
        
        }
     
        return 0 ;
     
}