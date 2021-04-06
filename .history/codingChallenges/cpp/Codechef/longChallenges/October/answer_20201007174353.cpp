#include<bits/stdc++.h>
using namespace std;

int findIndex(int b[], int n, int x, int required) {
    int min = INT_MAX, minp;
    for(int i=0;i<n;i++){
        if(b[i] == x) {
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
        int b[size];
        for(int i=0;i<size;i++)
        cin >> b[i];
        sort(b, b+size);
        int index = findIndex(b, size, target, required);
        int count = 0;
        if(b[index] != target){
            b[k-1] = target;
            sort(b, b+size);
            count++;
        }
        if(b[required-1] == target){
            cout << count;
            return;
        }
        if(required < k && b[required-1] < target) {
            cout << -1;
        return;
        }
        if(required > k && b[required-1] > target){
        cout << -1;
        return;
        }
    index = findIndex(b, size, target, required) + 1;
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