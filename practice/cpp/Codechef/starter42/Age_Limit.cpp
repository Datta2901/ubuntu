#include<bits/stdc++.h>
using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define loopv(i, n) for (int i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
#define MOD 1000000007
#define ll long long int 
#define vec(datStruct) vector<datStruct>
#define maxpq priority_queue<int>
#define minpq priority_queue<int,vector<int>,greater<int> >
#define prec(n) fixed<<setprecision(n)
#define all(v) v.begin,v.end()
#define inf (int)(1e18)
#define inc_sort(v) sort(v.begin(),v.end());
#define dec_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define bits(n) __builtin_popcount(n)
#define endl '\n'
using namespace std;
#define vectorInput(vect,n)for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)
#define EXECUTE_FASTER ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}


#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
clock_t time_p=clock();
void timeTaken()
{
    time_p=clock()-time_p;
    if(time_p != 0){
        cerr << "Time Taken : " <<(float)(time_p)/CLOCKS_PER_SEC <<"ms\n";
    }
}

int dx[4] = { -1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int dX[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dY[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

bool isPrime(int N){ 
    for(int i = 2; i * i <= N; ++i){
        if(N % i == 0){ 
            return false;
        }
    }
    return true;
}

void solve(){
    int x,y,a;
    cin >> x >> y >> a;
    if(x <= a && a < y){
        cout <<  "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    timeTaken();
    #ifndef ONLINE_JUDGE
        if(fopen("input.txt","r"))
        {
            freopen("input.txt","r",stdin);
            freopen("output.txt","a",stdout);
        }
    #endif // ONLINE_JUDGE
    EXECUTE_FASTER
    testcase(){
        solve();
    }
    timeTaken();
    return 0;
}
