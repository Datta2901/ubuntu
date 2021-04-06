#include <stack>
#include <bits/stdc++.h>
using namespace std; 

int main(){
    stack<int> first;
   vector<int>i,j;
    cin>>num;
  for(int k=0;k<num;k++){
    cin>>a;
     first.push(a);
         
    }
      for(k=0;k<num;k++){
        cin>>a;
        second.push(a);
      }

    cout<<"";
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