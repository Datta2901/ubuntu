#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    map<string,int> marks;
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            string name;
            int m;
            cin >> name >> m;
            marks[name] += m;
        }else if(type == 2){
            marks[name]
        }else{
            
        }
    }
    return 0;
}