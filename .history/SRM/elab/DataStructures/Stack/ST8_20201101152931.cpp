#include<bits/stdc++.h>
#include<iostream>
using namespace std;



int main(){
    string str;
    cin >> str;
    stack<int>s;
    for(int i = 0; i < str.size(); i++){
        switch(str[i]){
            case '+' :
                int val2 = s.top();
                s.pop();
                int val1 = s.top();
                s.pop();
                s.push(val1 + val2);
                break;
            case '-':
                int val2 = s.top();
                s.pop();
                int val1 = s.top();
                s.pop();
                s.push(val1 - val2);
                break;
            case '*':
                int val2 = s.top();
                s.pop();
                int val1 = s.top();
                s.pop();
                s.push(val1 * val2);
                break;
            case '/':
                int val2 = s.top();
                s.pop();
                int val1 = s.top();
                s.pop();
                s.push(val1 / val2);      
                break;
            default:    
                s.push(str[i]);
                break;      
        }
        cout << "Value of " << str << " is " << s.top   
    }
    return 0;
}