#include<bits/stdc++.h>
using namespace std;

const int N = 200005;
vector<int> Ltrav[N],Rtrav[N];
int par[2][N],st[2][N],ed[2][N];
int timer;

void dfsL(int v){
    st[0][v] = timer;
    timer++;
    for(auto &c : Ltrav[v]){
        dfsL(c);
    }
    
}

int main(){
    int n,q;
    cin >> n >> q;
    int h[n],a[n];

    memset(par,-1,sizeof(par));

    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> v;
    for(int i = 0; i < n; i++){
        if(v.size() == 0){
            v.push_back(i);
        }else{
            while(v.size() > 0 && h[v.back()] <= h[i]){
                v.pop_back();
            }

            if(v.size() > 0){
                Ltrav[v.back()].push_back(i);
                par[0][i] = v.back();
            }
            v.push_back(i);
        }
    }

    timer = 0;
    for(int i = 0; i < n; i++){
        if(par[0][i] == -1){
            dfsL(i);
        }
    }

    timer = 0;
    for(int i = 0; i < n; i++){
        if(par[1][i] == -1){
            dfsR(i);
        }
    }

    return 0;
}