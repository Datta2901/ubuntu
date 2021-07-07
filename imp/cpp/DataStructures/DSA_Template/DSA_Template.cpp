#include<bits/stdc++.h>
using namespace std;
#define ll long long int;

// constructor to initialize the vector for fenwickTree
// All the queries should be 0-based even internal implementation is 1 based 
struct FenwickTree {
    vector<ll> bit;
    ll n;

    FenwickTree(ll n) {
        this->n = n + 1;
        bit. assign(n + 1, 0LL);
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
        for (++idx; idx > 0LL; idx -= idx & -idx){
            net += bit[idx];
        }
        return ret;
    }
}

struct Segment_Tree{
    int n;
    vector<int> Seg;
    Segment_Tree(n){
        this->n = n;
        Seg.assign(4 *n + 1,0LL);
    }

    void build(int a[], int v, int tl, int tr) {
        if (tl == tr) {
            Seg[v] = a[tl];
        } else {
            int tm = (tl + tr) / 2;
            build(a, v*2, tl, tm);
            build(a, v*2+1, tm+1, tr);
            Seg[v] = Seg[v*2] + Seg[v*2+1];
        }
    }

    void update(int v, int tl, int tr, int pos, int new_val) {
        if (tl == tr) {
            Seg[v] = new_val;
        }else{
            int tm = (tl + tr) / 2;
            if (pos <= tm)
                update(v*2, tl, tm, pos, new_val);
            else
                update(v*2+1, tm+1, tr, pos, new_val);
            Seg[v] = Seg[v*2] + Seg[v*2+1];
        }
    }
}


struct SegmentTree {
	typedef int T;
	static constexpr T unit = INT_MIN;
	T f(T a, T b) { return max(a, b); } // (any associative fn)
	vector<T> s; int n;
	Tree(int n = 0, T def = unit) : s(2*n, def), n(n) {}
	void update(int pos, T val) {
		for (s[pos += n] = val; pos /= 2;)
			s[pos] = f(s[pos * 2], s[pos * 2 + 1]);
	}
	T query(int b, int e) { // query [b, e)
		T ra = unit, rb = unit;
		for (b += n, e += n; b < e; b /= 2, e /= 2) {
			if (b % 2) ra = f(ra, s[b++]);
			if (e % 2) rb = f(s[--e], rb);
		}
		return f(ra, rb);
	}
};