#include<stdio.h>
#include<unistd.h>
int main(){
    int control = fork();
    if(control == 0){
        printf("Underlying process is the Child process\n");
        printf("Process Id is  %d\n",control);
    }else{
        printf("Underlying process is the parent process process i\n");
        printf("Process Id is %d\n",control);
    }
    return 0;
}