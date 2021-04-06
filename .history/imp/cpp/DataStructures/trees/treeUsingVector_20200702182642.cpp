#include<iostream>
#include<bits/stdc++.h>
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
using namespace std;
const int N = 1e5 + 5,logN = 25;
vector<int> adj[N];
vector<int> h(N);
int p[N][logN];


void Dfs(int u,int prev,int v){
    h[u]  =  h[prev] + 1;
    while(u != v){

    }

}
void solve(){

    int q;
    int u,v;

    cin >> q;
    for(int i = 1; i <= q; i++){
        cin >> u  >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Dfs

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
        

        // for(int i = 0; i < q; i++){
        //     printVect(adj[i],int);
        //     cout << endl;
        // }

    }
    return 0;
}