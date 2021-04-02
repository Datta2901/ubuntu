#include<iostream>
using namespace std;
int stack[100];

void push(int &top){
    cin >> stack[top];
    top++;
}

void pop(int &top,int n){
    cout << "deleted element is" << endl;
    top--;
}

void PrintStack(int top){
    while(top > 0){
        cout << stack[top] << " ";
        top--;
    }

}

int main(){
    int top = 1;
    push(top);
    char control = 'y';
    while(control == 'y'){
        int operation;
        cin >> operation;
        if(operation == 1){
            push(top);
        }else{
            pop(top);
        }
        cin >> control;
    }
    PrintStack(top);
    return 0;
}