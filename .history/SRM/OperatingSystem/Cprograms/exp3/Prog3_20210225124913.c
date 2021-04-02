#include<stdio.h>
#include<unistd.h>
int main(){
    int control = vfork();
    return 0;
}