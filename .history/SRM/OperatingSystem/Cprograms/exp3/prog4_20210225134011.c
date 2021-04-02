#include<stdio.h>
#include<unistd.h>
int main(){
    int id = vfork();
    if(id == 0){
        printf("child process started \n");
        printf("value of n = %d\n",id);
    }else{
        printf(" Now I am coming back is parent process ");
        printf("value of n = %d",id);
    }
    return 0;
}