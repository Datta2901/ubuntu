#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    set<int> nu;
    while(q--){
        int type;
        string name;
        cin >> type >> name; 
        if(type == 1){
            int m;
            cin >> m;
            nu[name] += m;
        }else if(type == 2){
            nu[name] = 0;
        }else{
            cout << nu[name] << endl; 
        }
    }
    return 0;
}