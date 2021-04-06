#include<stdio.h>
#include<unistd.h>
int main(){
    int number;
    fork();
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("Selected number is : %d\n", number);
    return 0;
}
