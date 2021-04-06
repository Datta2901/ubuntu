#include <stdio.h>
#include<unistd.h>
int main()
{
    int pid;
    pid=fork();
    if(pid==0){
        printf("Id of the child process is %d\n", getpid());
    }
    else{
        printf("Id of the  Parent process is %d",getppid());
    }
return 0;
}
