#include<stdio.h>
#include<unistd.h>
int main(){
    int control = fork();
    if(control == 0){
        printf("Underlying process is the Child process process id is \n");
        printf("Process Id is  %d\n",control);
    }else{
        printf("Underlying process is the parent process process id is %d\n",control);
        printf("Parent process Id is %d\n",getppid());
    }
    return 0;
}