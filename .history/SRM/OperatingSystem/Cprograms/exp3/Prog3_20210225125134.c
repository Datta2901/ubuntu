#include<stdio.h>
#include<unistd.h>
int main(){
    int control = vfork();
    if(control == 0){
        printf("Child process is running\n");
        print(f"Process Id is  %d\n",control);
    }else{
        print("fParent process is running\n");
        print("Process Id is %d\n",control);
    }
    return 0;
}