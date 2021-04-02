// stack example
#include<bits/stdc++.h>
using namespace std;

bool isBalances(string str){
    stack<char> balance;
    for(auto i : str){
        if(i =='(' || i == '['){
            balance.push(i);
        }else{
            if(stack.empty()){
                return false;
            }
            stack.top = stack.pop();
        }
    }
}
int main(){
    string str;
    cin >> str;
    




    return 0;
} 