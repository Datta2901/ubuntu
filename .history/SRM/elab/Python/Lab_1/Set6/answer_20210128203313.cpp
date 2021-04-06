#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> name;
    for(int i = 0; i < 5; i++){
        name.push_back(i);
    }
    co
    for(auto x : name){
        cout << x << " ";
    }
    cout << endl;
    for(auto &x : name){
        cout << x << " ";
    }
    return 0;
}