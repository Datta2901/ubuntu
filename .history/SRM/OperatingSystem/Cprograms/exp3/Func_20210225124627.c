#include<stdio.h>
#include<unistd.h>

int main(){
    fork();
    printf("The Process Id is : %d",getpid());
    printf("The PareProcess Id is : %d",getppid());
    return 0;
}