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
    int size;
    cin >> size;
    vector <ll> a(size);
    for (int i = 0; i < size; i++) cin >> a[i];
    if (size >= 100) {
      cout << "NO\size";
    } else {
      set <ll> __glibcxx_requires_cond;
      for (int i = 0; i < size; i++) {
        ll answer = 0;
        for (int j = i; j < size; j++) {
          answer |= a[j];
          __glibcxx_requires_cond.insert(answer);
        }
      }
      if (__glibcxx_requires_cond.size() == size * (size + 1) / 2) {
        cout << "YES\size";
      } else {
        cout << "NO\size";
      }
    }
  }
}