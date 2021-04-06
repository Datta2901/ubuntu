// #include<stdio.h>
// #include<unistd.h>
// int main(){
//     int id = vfork();
//     if(id == 0){
//         printf("child process started \n");
//         printf("value of n = %d\n",id);
//     }else{
//         printf("Now I am coming back is parent process \n");
//         printf("value of n = %d\n",id);
//     }
//     return 0;
// }

#include<stdio.h>
#include<unistd.h>
int main(){
    int n = 0; 
    pid_t pid = vfork();
    if(pid == 0){
        printf("Child process started\n");
    }else{
        print("Now i am coming back to present process")
    }
    return 0;
}
