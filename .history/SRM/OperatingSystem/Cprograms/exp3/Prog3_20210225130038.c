#include<stdio.h>
#include<unistd.h>
int main(){
    int control = fork();
    if(control == 0){
        printf("Child process is running\n");
        printf("Process Id is  %d\n",control);
    }else{
        printf("Underlying process is the  parent p\n");
        printf("Process Id is %d\n",control);
    }
    return 0;
}