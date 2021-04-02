#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main(void)
{
//pid_t pa_id
int ch;
ch = fork();
if(ch == 0)
{
printf("The Underlying process is the child process\n");
printf("child id: %d\nParent id: %d\n", getpid(), getppid());
}
else if(ch>0)
{
printf("The Underlying process is the parent process\n");
printf("process id: %d\nParent id: %d\n", getpid(), getppid());
wait(NULL);
}
else
printf("Unable to create child process\n");
return 0;
}
