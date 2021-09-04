#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

#define INF 999999999999999
#define MOD 1000000007
#define all(x) x.begin(), x.end()

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin >> T;

    while(T--){
        int N, M, K; cin >> N >> M >> K;

        vi cost(N+1, INF); cost[0] = 0;
        priority_queue<ii, vii, greater<ii>> pq;

        vvii adj(N+1);
        while(K--){
            int x, C; cin >> x >> C;

            adj[0].push_back({x, C});
            adj[x].push_back({0, C});
        }

        
        while(M--){
            int A, B, D;
            cin >> A >> B >> D;
            adj[A].push_back({B, D});
            adj[B].push_back({A, D});
        }

        pq.push({0, 0});
        while(!pq.empty()){
            auto [cst, u] = pq.top(); pq.pop();
            
            for(auto [v, dd] : adj[u]){
                if(cst+dd < cost[v]){
                    cost[v] = cst+dd;
                    pq.push({cost[v], v});
                }
            }
        }

        for(int x = 1; x <= N; x++)
            cout << cost[x] << " ";
        cout << "\n";
    }

    return 0;
}
