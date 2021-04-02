#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> duplicates(int a[], int n) {
    map<int,int> dup;
    vector<int>answer;
    bool flag = true;
    for(int i = 0; i < n; i++){
        dup[a[i]]++;
    }
    for(auto it = dup.begin();it != dup.end(); it++){
        if(it->second > 1){
            answer.push_back(it->first);
            flag = false;
        }
    }
    if(flag){
        answer.push_back(-1);
    }
    sort(answer.begin(),answer.end());
    return answer;
}
