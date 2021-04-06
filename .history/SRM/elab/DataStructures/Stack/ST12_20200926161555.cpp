#include<bits/stdc++.h>
using namespace std;
int stack[100];

void push(int &top,int n){
    cin >> stack[top++];
}

void pop(int &top,int n){
    top--;
}

void PrintStack(int top){

}

int main(){
    int size;
    cin >> size;
    int top = 0;
    char control = 'y';
    while(control == 'y'){
        int operation;
        cin >> operation;
        if(operation == 1){
            push(top,size);
        }else{
            pop(top,size);
        }
    }

    return 0;
}