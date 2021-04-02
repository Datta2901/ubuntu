#include <stack>
#include <bits/stdc++.h>
using namespace std; 

int main(){
    stack<int> mystack1;
   vector<int>i;
  vector<int>j;
      int n,k,a;
  cin>>n;
  for(k=0;k<n;k++){
    cin>>a;
     mystack1.push(a);
         
    }
      for(k=0;k<n;k++){
        cin>>a;
        mystack2.push(a);
      }

    cout<<"";
     while (!mystack1.empty()) {
        cout<<mystack1.top()<<" ";
        mystack1.pop();
    }
  reverse(i.begin(),i.end());
  reverse(j.begin(),j.end());
        // printing the second stack
    cout<<endl;
    while (!mystack2.empty()) {
        cout<<mystack2.top()<<" ";
        mystack2.pop();
    }
    return 0;
}