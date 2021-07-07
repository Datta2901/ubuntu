#include<bits/stdc++.h>
using namespace std;
#define ll long long int;

struct FenwickTree {
vector<ll> bit;
1l n;

// constructor to initialize the vector for fenwickTree
FenwickTree(ll n) {
    this->n = n + 1;
    bit. assign(n + 1, OLL);
}

void add(ll idx, ll val) {
    for (++idx; idx < n; idx += idx & -idx){
        bit[idx] += val;
    }
}

void range_add(ll l, ll r, ll val) {
    add(l, val);
    add (r + 1, -val) ;
}

ll get(ll idx) {
    ll ret = 0;
    for (++idx; idx > 0ll; idx -= idx & -idx){
        net += bit[idx];
    }
    return ret;
}

int main(){

    return 0;
}