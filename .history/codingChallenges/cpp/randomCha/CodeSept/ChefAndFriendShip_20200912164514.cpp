#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int m ,n;
    cin >> m >> n;
    vector<int>arr[n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            if(a == 0){
                arr[j].push_back(i);
                arr[i].push_back()
            }
        }
    }


    return 0;
}