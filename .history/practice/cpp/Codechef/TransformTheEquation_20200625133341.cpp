#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str,expression;
        int a = 0; 
        cin >> str;
        stack<char> answer,operators;
        // for(int i = 0; i < str.size(); i++){
        //     cout << str[i] << " ";
        // }
        // for(int i = 0; i < str.size(); i++){
        //     if(str[i] == '('){
        //         answer.push(str[i]);
        //     }else if(str[i] == ')'){
        //         expression[a++] = operators.top();
        //         answer.pop();
        //         operators.pop();
        //     }else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
        //         operators.push(str[i]);
        //     }else{
        //         expression[a++] = str[i];
        //     }
        // }
        expression[0] = str[0];
        expression[1] = '\0';
        cout << expression << endl;
    }
    return 0;
}