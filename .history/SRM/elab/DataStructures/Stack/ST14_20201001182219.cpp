#include<iostream>
using namespace std;
int stack[100];

void push(int &top){
    cin >> stack[top++];
}

void pop(int &top){
    cout << "deleted element is " << stack[top] <<  endl;
    top--;
    count--;
}

void PrintStack(int top){
    cout << "status of the stack is" << endl; 
    while(top >= 0){
        cout << stack[top] << "->";
        top--;
    }
    cout << "!"<<endl;
}

int main(){
    int top = 0;
    push(top);
    char control = 'y';
    while(control == 'y'){
        int operation;
        cin >> operation;
        if(operation == 1){
            push(top);
        }else if(operation == 2){
            top = count - 1;
            pop(top);
        }else if(operation == 3){
            PrintStack(top);
        }
        cin >> control;
    }
    return 0;
}