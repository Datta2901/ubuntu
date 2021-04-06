#include <stdio.h>
#include<unistd.h>
int main()
{
    int pid;
    pid=fork();
    if(pid==0){
        printf("Id of the child process is %d\n", pid);
    }
    else{
        printf("Id of the  Parent process is %d\n",getppid());
    }
    printf("Id of the current process is ")
return 0;
}
