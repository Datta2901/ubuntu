// differ
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> name;
    for(int i = 0; i < 5; i++){
        name.push_back(i);
    }
    cout << "auto x : name " << endl;
    for(auto x : name){
        cout << x << " ";
        x = 6;
    }
    cout << endl;
    cout << "After manupulating ";
    for(auto x : name){
        cout << x << " ";
    }
    cout << endl;
    cout << "auto &x : name "<< endl;
    for(auto &x : name){
        cout << x << " ";
        x =6;
    }
    cout << "After manupulating ";
    for(auto &x : name){
        cout << x << " ";
    }

    return 0;
}