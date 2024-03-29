#include<iostream>
using namespace std;
int stack[100];

void push(int &top){
    cin >> stack[top++];
    cout << stack[top-1];
}

void pop(int &top){
    if(stack[top] == 0){
        top--;
    }
    cout << "deleted element is " << stack[top] <<  endl;
    top--;    
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
            pop(top);
        }else if(operation == 3){
            PrintStack(top);
        }
        cin >> control;
    }
    return 0;
}