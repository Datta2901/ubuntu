#include<stdio.h>
#include<unistd.h>

int main(){
    fork();
    printf("gedit fork\n");
    return 0;
}