#include<bits/stdc++.h>
using namespace std;

#define loop(n) for (ll i = 0; i < n; i++)
#define loopv(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (ll i = x; i < y; i++)
#define DEC(i, x, y) for (ll i = x; i >= y; i--)
#define MOD 1000000007
#define ll long long int 
#define vec(datStruct) vector<datStruct>
#define maxpq priority_queue<ll>
#define minpq priority_queue<ll,vector<ll>,greater<ll> >
#define prec(n) fixed<<setprecision(n)
#define all(v) v.begin(),v.end()
#define inf (ll)(1e18)
#define inc_sort(v) sort(v.begin(),v.end());
#define ort(v) sort(v.begin(),v.end(),greater<ll>());
#define pb push_back
#define bits(n) __builtin_popcount(n)
#define endl '\n'
#define vectorInput(vect,n)for(ll i=0;i<n;i++){ ll a; cin >> a; vect.pb(a);}
#define testcase() ll t; cin >> t; while(t--)
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
void __print(const T &x) {ll f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _prll() {cerr << "]\n";}
template <typename T, typename... V>
void _prll(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _prll(v...);}


#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _prll(x)
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

ll dx[4] = { -1, 1, 0, 0};
ll dy[4] = {0, 0, -1, 1};
ll dX[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
ll dY[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

bool isPrime(ll N){ 
    for(ll i = 2; i * i <= N; ++i){
        if(N % i == 0){ 
            return false;
        }
    }
    return true;
}

void solve(){
    ll size;
    cin >> size;
    vector<ll>pre(size, -1),nums;
    vectorInput(nums,size);
    bool answer = true;
    ll nonZero = 0;
    for(ll i = size - 1; i >= 0 ; i--){
        if(nums[i] != 0){
            nonZero = i;
            break;
        }
    }
    ll sum = 0;
    for(ll i = 0; i <= nonZero; i++){
        sum += nums[i];
        if(i > 0){
            nums[i] += nums[i - 1];
        }
        if(i < nonZero && nums[i] <= 0){
            answer = false;
            break;
        }
    }
    if(!answer || sum != 0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
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
