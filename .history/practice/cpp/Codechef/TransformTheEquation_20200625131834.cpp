#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str,expression;
        cin >> str;
        stack<char> answer,operators;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '('){
                answer.push(str[i]);
            }if(str[i] == ')'){
                answer.pop();
            }if(str[i] == '+' || str[i] == '-' || str[i] == '*' || )
        }
    }





    return 0;
}