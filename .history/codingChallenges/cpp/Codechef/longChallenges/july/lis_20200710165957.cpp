#include<bits/stdc++.h>
using namespace std;
vector<int> d;
int ans, n;
 
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        vector<int>::iterator it = lower_bound(d.begin(), d.end(), x);
        if (it == d.end()) d.push_back(x) ;cout << x;
        else *it = x;
    }
    printf("LIS = %d\n", d.size());
    return 0;
}