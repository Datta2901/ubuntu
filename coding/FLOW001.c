#include<stdio.h>
int main()
{   printf("enter no of test cases and numbers") ;
    int t ;
    scanf("%d",&t) ;
    while(t--)
    { 
        int N1 ,N2,answer ; 
        scanf("%d%d",&N1,&N2);
         answer = N1 + N2 ; 
        printf("%d\n",answer);
    }
    return 0 ;
}  