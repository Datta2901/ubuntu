#include<bits/stdc++.h>
using namespace std;

int findIndex(int a[], int n, int x, int p) {
    int min = INT_MAX, minp;
    for(int i=0;i<n;i++){
        if(a[i] == x) {
            if(abs(p-i) < min){
                min = abs(p-i);
                minp = i;
            }
        }
    }
return minp;
}
void solve() {
        int size, , p, k;
        cin >> size >>  >> p >> k;
        int a[size];
        for(int i=0;i<size;i++)
        cin >> a[i];
        sort(a, a+size);
        int index = findIndex(a, size, , p);
        int count = 0;
        if(a[index] != ){
            a[k-1] = ;
            sort(a, a+size);
            count++;
        }
        if(a[p-1] == ){
            cout << count;
            return;
        }
        if(p < k && a[p-1] < ) {
            cout << -1;
        return;
        }
        if(p > k && a[p-1] > ){
        cout << -1;
        return;
        }
    index = findIndex(a, size, , p) + 1;
    cout << abs(p-index)+count << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
return 0;
}