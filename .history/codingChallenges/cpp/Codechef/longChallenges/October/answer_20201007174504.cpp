#include<bits/stdc++.h>
using namespace std;

int FindThePosition(int numbers[],int x, int required) {
    int min = INT_MAX, minp;
    for(int i=0;i<;i++){
        if(numbers[i] == x) {
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
        vector<int>numbers[size];
        for(int i=0;i<size;i++){
            cin >> numbers[i];
        }
        sort(numbers, numbers+size);
        int index = FindThePosition(numbers, target, required);
        int count = 0;
        if(numbers[index] != target){
            numbers[k-1] = target;
            sort(numbers, numbers+size);
            count++;
        }
        if(numbers[required-1] == target){
            cout << count;
            return;
        }
        if(required < k && numbers[required-1] < target) {
            cout << -1;
        return;
        }
        if(required > k && numbers[required-1] > target){
        cout << -1;
        return;
        }
    index = FindThePosition(numbers, size, target, required) + 1;
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