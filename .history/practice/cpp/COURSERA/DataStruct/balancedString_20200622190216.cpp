// stack example
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    stack<char> stack;
    for(auto i : str){
        if(i =='(' || i == '['){
            stack.push(i);
        }else{
            if(stack.empty())
        }
    }




    return 0;
} 