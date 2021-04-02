#include<stdio.h>
#include<unistd.h>
int main(){
    int control = vfork();
    if(control == 0){
        print("Child process is running\n");
        print("Chi")
    }
    return 0;
}