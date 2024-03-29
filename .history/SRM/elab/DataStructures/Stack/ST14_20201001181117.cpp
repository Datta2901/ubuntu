#include<iostream>
using namespace std;
int stack[100];

void push(int &top){
    cin >> stack[top];
    top++;
}

void pop(int &top){
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
    int size;
    cin >> a;

    int top = 0;
    char control = 'y';
    while(control == 'y'){
        int operation;
        cin >> operation;
        if(operation == 1){
            push(top);
        }else if(operation == 2){
            pop(top);
            PrintStack(top);
        }
        cin >> control;
    }
    return 0;
}