#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    set<int> numbers;
    while(q--){
        int type,x;
        cin >> type >> x; 
        if(type == 1){
            numbers.insert(x);
        }else if(type == 2){
            numbers.erase(x);
        }else{
            auto it = numbers.find(x);
            if(it == numm)
        }
    }
    return 0;
}