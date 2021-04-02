#include<bits/stdc++.h>
using namespace std;
int stack[100];

void push(int &top,int n){
    cin >> stack[top++];
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
        cin >> operation >> control;
        if(operation == 1){
            push(top,size);
        }else{
            pop(top,size);
        }
    }
    PrintStack()

    return 0;
}