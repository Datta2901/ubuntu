#include <bits/stdc++.h>
#include <stack>
#include<vector>
using namespace std; 

int main(){
    stack<int> first,second;
    vector<int>i;
  	vector<int>j;
    int number;
    cin >> number;
    for(int k = 0; k < number; k++){
        int a;   
        cin >> a;
        first.push(a);
    }
    for(int k = 0; k < number; k++){
        int a;  
        cin >> a;
        second.push(a);
    }while (!second.empty()) {
        cout<<second.top()<<" ";
        second.pop();
    }
    cout << endl;
    reverse(i.begin(),i.end());
    reverse(j.begin(),j.end());
    while(!first.empty()){
        cout<<first.top()<<" ";
        first.pop();
    }
    return 0;
}