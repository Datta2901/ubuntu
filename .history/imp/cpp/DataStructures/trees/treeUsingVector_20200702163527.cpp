#include<iostream>
#include<bits/stdc++.h>
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
using namespace std;
const int N = 1e5 + 5,logN = 25;
int main(){

    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        vector<int> A;
        vector<int> adj[N];

        A.push_back(0);
        for(int i = 1; i <= size; i++){
            A.push_back(i);
        }
        int q;
        cin >> q;
        for(int i = 0; i < q; i++){
            int u,v;
            cin >> u  >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        printVect(adj[N],int);
    }
    return 0;
}