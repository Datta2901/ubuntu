#include<stdio.h>
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int a,b=0,c ;
        scanf("%d",&a);
        c=a ;
        for(;a>0;a=a/10){
            b=b*10+a%10 ;
        }
        if(b==c){
           printf("wins\n");
        }
        else{
             printf("losses\n");
        }
    }
    return 0 ;
}