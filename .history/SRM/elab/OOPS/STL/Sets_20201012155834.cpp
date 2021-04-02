#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    set<int>s;
    int size;
    cin >> size;
    while(size--){
        int y,x;
        cin >> y >> x;;
        if(y == 1){
            s.insert(x);
        }if(y == 2){
            s.erase(x);
        }if(y == 3){
            int length = s.size();
            s.insert(x);
            if(length == s.size()){
            }else{
                cout << "Yes\n";
                cout << "No\n";
            }
        }
    }
    return 0;
}