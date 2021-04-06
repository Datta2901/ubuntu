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
        }else if(y == 2){
            s.erase(x);
        }else{
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
    cout << *it <<  
}