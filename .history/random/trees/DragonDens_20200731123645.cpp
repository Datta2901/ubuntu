#include<bits/stdc++.h>
using namespace std;

const int N = 200005;
vector<int> Ltrav[N],Rtrav[N];
int par[2][N],st[2][N],ed[2][N];
int timer = 0;

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
                v.pop_back()
            }
        }
    }

    return 0;
}