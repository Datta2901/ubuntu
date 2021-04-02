#include<bits/stdc++.h>
using namespace std;

int findIndex(int a[], int n, int x, int required) {
    int min = INT_MAX, minp;
    for(int i=0;i<n;i++){
        if(a[i] == x) {
            if(abs(required-i) < min){
                min = abs(required-i);
                minp = i;
            }
        }
    }
return minp;
}
void solve() {
        int size, target, required, k;
        cin >> size >> target >> required >> k;
        int a[size];
        for(int i=0;i<size;i++)
        cin >> a[i];
        sort(a, a+size);
        int index = findIndex(a, size, target, required);
        int count = 0;
        if(a[index] != target){
            a[k-1] = target;
            sort(a, a+size);
            count++;
        }
        if(a[required-1] == target){
            cout << count;
            return;
        }
        if(required < k && a[required-1] < target) {
            cout << -1;
        return;
        }
        if(required > k && a[required-1] > target){
        cout << -1;
        return;
        }
    index = findIndex(a, size, target, required) + 1;
    cout << abs(required-index)+count << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
return 0;
}