#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int64_t INF64 = int64_t(2e18) + 5;
int INF = 1e9 + 5;
// Chef Ants

void solve(){
    int N;
    cin >> N;

    vector<vector<int>> Lines(N);
    unordered_map<int, int> Ants;

    //ll pos = 0, neg = 0;
    for (int i = 0; i < N; i++) {
        ll M;
        cin >> M;

        Lines[i].resize(M);

        for (auto &ant : Lines[i]) {
            cin >> ant;
            Ants[abs(ant)]++;
        }
    }

    int64_t collision = 0;
    for (auto check : Ants) {
        collision += (check.second > 1);
    }

    for (int i = 0; i < N; i++) {

        vector<int> neg, pos;

        for (auto it : Lines[i]) {
            if (it < 0) 
                neg.push_back(it);
            else
                pos.push_back(it);
        }

        reverse(neg.rbegin(), neg.rend());
        pos.resize(pos.size());
        neg.resize(neg.size());

        int pick;
        int p = 0, n = 0;
        while (p < pos.size() || n < neg.size()) {
            if (p >= pos.size()) 
                pick = neg[n];
            
            else if (n >= neg.size()) 
                pick = pos[p];

            else //(p < pos.size() && n < neg.size())
                pick = (pos[p] < abs(neg[n]) ? pos[p] : neg[n]);

            (pick > 0 ? p++ : n++);

            collision += (Ants[abs(pick)] > 1 ? (pick > 0 ? pos.size() - p : neg.size() - n) : (pick > 0 ? neg.size() - n : pos.size() - p));
        }

    }

    cout << collision << endl;

}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif  
    

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}