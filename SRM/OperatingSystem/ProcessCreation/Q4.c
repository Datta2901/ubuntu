#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
int i;
printf("hello before fork \n");
printf("i : %d\n",i);
i=fork();
printf("\n");
if(i==0)
{
printf("child has started\n\n");
printf("child printing first time \n");
printf("getpi : %d getppid : %d \n",getpid(),getppid());
sleep(5);
printf("\n chid printing second time\n");
printf("getpid : %d getppid : %d\n",getpid(),getppid());
}
else
{
printf("parent has started\n");
printf("getpid : %d getppid : %d\n",getpid(),getppid());
printf("\n");
}
printf("hi after fork i : %d\n",i);
return 0;
}
