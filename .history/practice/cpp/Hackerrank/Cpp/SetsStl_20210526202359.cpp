#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
     marks;
    while(q--){
        int type;
        string name;
        cin >> type >> name; 
        if(type == 1){
            int m;
            cin >> m;
            marks[name] += m;
        }else if(type == 2){
            marks[name] = 0;
        }else{
            cout << marks[name] << endl; 
        }
    }
    return 0;
}