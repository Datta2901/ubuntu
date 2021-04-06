#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* MakeStack(unsigned capacity)
{
  struct Stack *a=(struct Stack*)malloc(sizeof(struct Stack));
  a->top = 1; 
  return a;
}
int main(){
    string str;
    cin >> str;
    stack<int>s;
    int val1,val2;
  int size = str.size();
    for(int i = 0; i < size; i++){
        switch(str[i]){
            case '+' :
                val2 = s.top();
                s.pop();
                val1 = s.top();
                s.pop();
                s.push(val1 + val2);
                break;
            case '-':
                val2 = s.top();
                s.pop();
                val1 = s.top();
                s.pop();
                s.push(val1 - val2);
                break;
            case '*':
                val2 = s.top();
                s.pop();
                val1 = s.top();
                s.pop();
                s.push(val1 * val2);
                break;
            case '/':
                val2 = s.top();
                s.pop();
                val1 = s.top();
                s.pop();
                s.push(val1 / val2);      
                break;
            default:  
                s.push(str[i] - 48);
                break;      
        }
    }
    cout << "Value of " << str << " is " << s.top() << endl;   
    return 0;
}