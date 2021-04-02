// 
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
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int size;
    cin >> size;
    vector <ll> a(size);
    for (int i = 0; i < size; i++) cin >> a[i];
    if (size >= 65) {
      cout << "NO\n";
    } else {
      unordered_set <ll> required;
      for (int i = 0; i < size; i++) {
        ll answer = 0;
        for (int j = i; j < size; j++) {
          answer |= a[j];
          required.insert(answer);
        }
      }
      if (required.size() == size * (size + 1) / 2) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
  }
}