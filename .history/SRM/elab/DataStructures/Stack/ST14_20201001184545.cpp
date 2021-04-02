#include<iostream>
using namespace std;
int stack[100];

void push(int &top){
    cin >> stack[top];
    top++;
}

void pop(int &top){
    cout << "deleted element is" <<stack[] endl;
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
        }else if (operation == 2){
            pop(top);
        }else{
            PrintStack(top);
        }
        cin >> control;
    }
    
    return 0;
}