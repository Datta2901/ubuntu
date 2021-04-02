#include<stdio.h>
#include<unistd.h>
int main(){
    int number;
    fork();
    
    scanf("%d",&number);
    printf("Selected number is : %d\n", number);
    return 0;
}
