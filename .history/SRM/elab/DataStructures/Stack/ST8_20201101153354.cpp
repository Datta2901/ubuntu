#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    stack<int>s;
    int val1,val2;
    for(int i = 0; i < str.size(); i++){
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
               
                s.push(stoi(str[i]));
                break;      
        }
        cout << "Value of " << str << " is " << s.top() << endl;   
    }
    return 0;
}