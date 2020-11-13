#include<iostream>
using namespace std;
int stack[20];

void DELETE();

void push(int &top){
    top++;
    cin >> stack[top];
}

void pop(int &top){
    if(stack[top] == -1){
        while(stack[top] == -1){
            top = top - 1;
        }
    }
    cout << "deleted element is " <<stack[top] << endl;
    top--;
}

void PrintStack(int top){
    cout << "status of the stack is" << endl;
    while(top >= 0){
        cout << stack[top] << "->";
        top = top -1;
    }
    cout <<"!"<<endl;

}

int main(){
    for(int i = 0; i < 20; i++){
        stack[i] = -1;
    }
    int top = -1;
    push(top);
    char control = 'y';
    while(control == 'y'){
        int operation;
        cin >> operation;
        if(operation == 1){
            push(top);
        }else if (operation == 2){
            pop(top);
        }else{
            PrintStack(top);
        }
        cin >> control;
    }
    
    return 0;
}