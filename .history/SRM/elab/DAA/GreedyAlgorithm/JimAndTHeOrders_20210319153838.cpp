#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>>orders;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        orders.push_back(make_pair(a + b,i + 1));
    }
    sort(orders.begin(),orders.end());
    
    return 0;
}