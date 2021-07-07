#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct FenwickTree {
	vector<ll> bit;  
	ll n;

	FenwickTree(ll n) {
		this->n = n + 1;
		bit.assign(n + 1, 0ll);
	}

	void add(ll idx, ll val) {
		for (++idx; idx < n; idx += idx & -idx)
			bit[idx] += val;
	}

	void range_add(ll l, ll r, ll val) {
		add(l, val);
		add(r + 1, -val);
	}

	ll get(ll idx) {
		ll ret = 0;
		for (++idx; idx > 0ll; idx -= idx & -idx)
			ret += bit[idx];
		return ret;
	}
};

void solve() {
	ll n, q; cin >> n >> q;
	ll a[n];
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	FenwickTree B1(n), B2(n), B3(n);

	while (q--) {
		ll type;; cin >> type;
		if (type == 1) {
			ll l, r, x; cin >> l >> r >> x;
			ll y = x - l;
			l--, r--;
			B1.range_add(l, r, y * y);
			B2.range_add(l, r, y * 2);
			B3.range_add(l, r, 1ll);
		}
		else {
			ll i; cin >> i;
			ll ans = a[i - 1] + B1.get(i - 1) + i * B2.get(i - 1) + i * i * B3.get(i - 1);
			cout << ans << '\n';
		}
	}
}

int  main() {
    solve();
	return 0;
}