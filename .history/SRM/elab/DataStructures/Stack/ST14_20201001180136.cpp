#include<iostream>
using namespace std;
int stack[100];

void push(int &top,int n){
    cin >> stack[top];
    if(top == n){
        ;
    }else{
        top++;
    }
}

void pop(int &top,int n){
    if(n + 2 > top){
        cout << "deleted element is " << stack[top] <<  endl;
        top--;
    }else{
        ;
    }
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
    cin >> size;
    int top = 0;
    char control = 'y';
    while(control == 'y'){
        int operation;
        cin >> operation;
        if(operation == 1){
            push(top,size);
        }else if(operation == 2){
            pop(top,size);
        }
        cin >> control;
    }
    PrintStack(top);
    return 0;
}