#include<stdio.h>
#include<unistd.h>
int main(){
    int control = vfork();
    if(control == 0){
        print("Child process is r")
    }
    return 0;
}