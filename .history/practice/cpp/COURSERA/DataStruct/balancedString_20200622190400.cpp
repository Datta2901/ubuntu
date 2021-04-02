// stack example
#include<bits/stdc++.h>
using namespace std;

bool isBalances(string str){
    stack<char> stack;
    for(auto i : str){
        if(i =='(' || i == '['){
            stack.push(i);
        }else{
            if(stack.empty()){
                return false;
            }
            char top = stack.pop();
        }
    }
}
int main(){
    string str;
    cin >> str;
    




    return 0;
} 