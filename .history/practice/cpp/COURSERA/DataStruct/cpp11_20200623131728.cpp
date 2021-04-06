// stack example
#include<bits/stdc++.h>
using namespace std;

bool isBalances(string str){
    stack<char> stack;
    for(stack<char>::iterator i : str){
        if(i =='(' || i == '['){
            stack.push(i);
        }else{
            if(stack.empty()){
                return false;
            }
           
            if((stack.top() == ']' && i != ']') || (stack.top() == '(' && i != ')')){
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}

int main(){
    string str;
    cin >> str;
    if(isBalances(str)){
        cout << "Given string is balanced string \n";
    }else{
        cout << "Given string is unbalanced string\n";
    }
    return 0;
} 
// input
// ()[][([])] is balanced string