#include<stdio.h>
#include<unistd.h>
int main(){
    int id = vfork();
    if(id == 0){
        printf("child process started ");
        printf("value of n = ",id);
    }else{
        printf(" Now I ")
    }
    return 0;
}