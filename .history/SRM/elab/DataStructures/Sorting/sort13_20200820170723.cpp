#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        vector<int> merged;
        for(int i = 0; i < m + n; i++){
            int a;
            cin >> a;
            merged.push_back(a);
        }
        sort(merged.begin(),merged.end())
    }
    return 0;
}