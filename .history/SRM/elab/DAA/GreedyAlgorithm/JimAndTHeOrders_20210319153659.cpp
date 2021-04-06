#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>>orders;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        orders.push(make_pair(a + b,i + 1));
    }
    return 0;
}