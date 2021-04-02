#include<stdio.h>
#include<unistd.h>

int main(){

    int pid,n,i,oddsum=0,evensum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    pid=fork();
    if(pid==0){
    for(i=1;i<=n;i=i+2){
        oddsum=oddsum+i;
    }
    printf("Odd Sum=%d\n",oddsum);
    }
    else{
        for(i=2;i<=n;i=i+2){
            evensum=evensum+i;
        }
        printf("Even Sum=%d\n",evensum);
    }
return 0;
}
