#include<stdio.h>
#include<unistd.h>

int main(){
    fork();
    printf("The Process Id is : %d",getpid());
    printf("The PProcess Id is : %d",getppid());
    return 0;
}