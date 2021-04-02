#include<iostream>
using namespace std;
int stack[100];

void push(int &top,int n){
    cin >> stack[top];
    top++;
}

void pop(int &top,int n){
    cout << "deleted element is" << endl;
    top--;
}

void PrintStack(int top){
    while(top >= 0){
        cout << stack[top] << " ";
        top--;
    }

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
        cin >> cont
    }
    PrintStack(top);
    return 0;
}