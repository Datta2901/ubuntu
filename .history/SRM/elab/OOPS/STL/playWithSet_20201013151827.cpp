#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    set<int>s;
    int size;
    cin >> size;
    int i = size;
    while(size--){
        int y,x;
        cin >> y >> x;;
        {
            if(s.find(x) != s.end()){
               cout << "Yes\n";
            }else{
                 cout << "No\n";
            }
        }
    }
    return 0;
}

for(it = s1.begin(); it != s1.end(); it++){
    cout << *it << " "; 
}