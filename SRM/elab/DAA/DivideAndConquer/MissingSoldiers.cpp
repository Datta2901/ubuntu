#include <bits/stdc++.h>
using namespace std;
#define LL long long int
vector<pair<int, int>> ev;
bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) return a.first < b.first;
    return a.second < b.second;
}
int main() {
    int n, i;
    cin >> n;
    for (i=0;i<n;i++) {
        int x, y, d;
        cin >> x >> y >> d;
        ev.push_back({x, x+d});
    }
    sort(ev.begin(), ev.end(), compare);
    LL op = 0, cl = -1, ans = 0;
    for (auto it : ev) {
        if (cl < it.first) {
            ans += cl - op + 1;
            op = it.first;
            cl = it.second;
        } else cl = max(cl, it.second * 1LL);
    }
    ans += cl - op + 1;
    cout << ans << '\n';
    return 0;
}