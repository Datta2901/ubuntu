#include <stack>
#include <bits/stdc++.h>
using namespace std; 

int main(){
    stack<int> first;
   vector<int>i;
  vector<int>j;
      int n,k,a;
  cin>>n;
  for(k=0;k<n;k++){
    cin>>a;
     first.push(a);
         
    }
      for(k=0;k<n;k++){
        cin>>a;
        s.push(a);
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
    while (!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}