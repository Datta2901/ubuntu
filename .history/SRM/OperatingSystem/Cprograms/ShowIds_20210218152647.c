#include <stdio.h>
#include<unistd.h>
int main()
{
    pid=fork();
    if(pid==0){
        printf("Id of the child process is %d", )
    }
    else{
        sleep(1);
        a=a-1;
        b=b-1;
        printf("In Parent a=%d b=%d \n",a,b);
    }
return 0;
}
