#include<stdio.h>
#include<unistd.h>
int main(){
    int control = vfork();
    if(control == 0){
        print("Child process is running\n");
        perint("Process Id is  %d\n",control);
    }
    return 0;
}