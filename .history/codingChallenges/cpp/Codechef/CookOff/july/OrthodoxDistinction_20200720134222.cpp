#include <cmath>
#include <functional>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <time.h>
#include <math.h>
#include <random>
#include <deque>
#include <queue>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <chrono>
#include <cstring>
 
using namespace std;
 
typedef long long ll;
 
#ifdef iq
  mt19937 rnd(228);
#else
  mt19937 rnd(chrono::high_resolution_clock::now().time_since_epoch().count());
#endif
 
int main() {
#ifdef iq
  freopen("a.in", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector <ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (n >= 100) {
      cout << "NO\n";
    } else {
      set <ll> q;
      for (int i = 0; i < n; i++) {
        ll x = 0;
        for (int j = i; j < n; j++) {
          x |= a[j];
          q.insert(x);
        }
      }
      if (q.size() == n * (n + 1) / 2) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
  }
}