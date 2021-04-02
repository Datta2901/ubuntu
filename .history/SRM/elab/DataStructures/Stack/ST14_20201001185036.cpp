#include<iostream>
using namespace std;
int stack[20];

void push(int &top){
    cin >> stack[top];
    top++;
}

void pop(int &top){
    if(stack[top] == -1){
        while(stack[top] == -1){
            top = top - 1;
        }
    }
    cout << "deleted element is" <<stack[top] << endl;
    top--;
}

void PrintStack(int top){
    while(top > 0){
        cout << stack[top] << " ";
        top = top -1;
    }

}

int main(){
    for(int i = 0; i < 20; i++){
        stack[i] = -1;
    }
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