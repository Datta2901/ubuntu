#include <stack>
#include <bits/stdc++.h>
using namespace std; 

int main(){
    stack<int> first,second;
    vector<int>i,j;
    int number;
    cin>>number;
    for(int k = 0; k < number; k++){
        int a;   
        cin >> a;
        first.push(a);
    }
      for(int k = 0; k < number; k++){
        int a;  
        cin >> a;
        second.push(a);
      }

     while (!first.empty()) {
        cout<<first.top()<<" ";
        first.pop();
    }
  reverse(i.begin(),i.end());
  reverse(j.begin(),j.end());
        // printing the second stack
    cout<<endl;
    while (!second.empty()) {
        cout<<second.top()<<" ";
        second.pop();
    }
    return 0;
}