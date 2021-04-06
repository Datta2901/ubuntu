#include<stdio.h>
#include<unistd.h>
int main(){
    int id = vfork();
    
    return 0;
}