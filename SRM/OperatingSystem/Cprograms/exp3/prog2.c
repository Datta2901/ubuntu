#include<stdio.h>
#include<unistd.h>

int main(){
    printf("The Process Id is : %d\n",getpid());
    printf("The Parent Process Id is : %d\n",getppid());
    return 0;
}
