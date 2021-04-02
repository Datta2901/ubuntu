#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    set<int>s;
    int size;
    cin >> size;
    while(size--){
        int a,b;
        cin >> a >> b;;
        if(a == 1){
            s.insert(b);
        }if(a == 2){
            s.erase(b);
        }if(a == 3){
            int length = s.size();
            s.insert(b);
            if(length == s.size()){
                cout << "No\n";
            }else{
                cout << "Yes\n";
            }
        }
    }
    return 0;
}