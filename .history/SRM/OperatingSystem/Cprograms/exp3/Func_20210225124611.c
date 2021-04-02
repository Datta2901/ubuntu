#include<stdio.h>
#include<unistd.h>

int main(){
    fork();
    printf("The Process Id is : %d",getpid())
    return 0;
}