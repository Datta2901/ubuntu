#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    set<int> number;
    while(q--){
        int type;
        string name;
        cin >> type >> name; 
        if(type == 1){
            int m;
            cin >> m;
            number[name] += m;
        }else if(type == 2){
            number[name] = 0;
        }else{
            cout << number[name] << endl; 
        }
    }
    return 0;
}