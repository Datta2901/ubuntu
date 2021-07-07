// https://www.codechef.com/START5C/problems/SLPCYCLE
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int size,required;
    string day;
    cin >> size >> required >> day;
    int count0 = 0;
    vector<int>Available;
    for(int i = 0; i < size; i++){
        if(day[i] == '0'){
            count0++;
        }else{
            Available.push_back(count0);
            // cout << count0 << " ";
            count0 = 0;
        }
    }
    Available.push_back(count0);
    bool control = false;
    for(int i = 0; i < Available.size(); i++){
        if(required <= Available[i]){
            control = true;
            break;
        }else if(2 * (required - Available[i]) < required){
            required = 2 * (required - Available[i]);
            // cout << required << endl;
        }
        if(required <= 0){
            control = true;
            break;
        }
    }

    if(control){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}