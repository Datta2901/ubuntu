#include<stdio.h>
#include<unistd.h>
int main(){
    int id = vfork();
    if(id == 0){
        printf("child process started ");
        printf("value of n = %d",id);
    }else{
        printf(" Now I am coming back is parent process ");
        printf("value of n = %d",)
    }
    return 0;
}