#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    set<int> ;
    while(q--){
        int type;
        string name;
        cin >> type >> name; 
        if(type == 1){
            int m;
            cin >> m;
            [name] += m;
        }else if(type == 2){
            [name] = 0;
        }else{
            cout << [name] << endl; 
        }
    }
    return 0;
}