#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int count;
void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u]){
           
            dfs(u);
        }
    }
    cout << endl;
}


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
            }
        }
    }

    return 0;
}