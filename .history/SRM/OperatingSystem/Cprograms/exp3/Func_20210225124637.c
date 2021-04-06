#include<stdio.h>
#include<unistd.h>

int main(){
    fork();
    printf("The Process Id is : %d\n",getpid());
    printf("The Parent Process Id is : %d",getppid());
    return 0;
}