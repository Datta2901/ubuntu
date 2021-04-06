#include<stdio.h>
#include<unistd.h>
int main(){
    int control = vfork();
    if(control == 0){
        printf("Child process is running\n");
        printf("Process Id is  %d\n",control);
    }else if(control {
        printf("Parent process is running\n");
        printf("Process Id is %d\n",control);
    }
    return 0;
}