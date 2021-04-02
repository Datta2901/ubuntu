#include<stdio.h>
#include<unistd.h>
int main(){
    int id = vfork();
    if(id == 0){
        printf("child process started")
    }
    return 0;
}