#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    set<int> numbers;
    while(q--){
        int type;
        string name;
        cin >> type >> name; 
        if(type == 1){
            
        }else if(type == 2){
            numbers[name] = 0;
        }else{
            cout << numbers[name] << endl; 
        }
    }
    return 0;
}