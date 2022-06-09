#include<bits/stdc++.h>
using namespace std;

#define loop(n) for (int i = 0; i < n; i++)
#define loopv(i, n) for (int i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
#define MOD 1000000007
#define ll long long int 
#define l long int
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
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

vector<int> GenerateTestCases(int limit){
    // int size = rand() %  limit   // if you want from [0,limit)
    int size = rand() %  limit + 1; // if you want from [1,limit]
    vector<int>nums;
    for(int i = 0; i < size; i++){
        nums.push_back(rand() % limit);
    }
    return nums;
}

void GenerateTestCasesInfile(int limit){
    // int size = rand() %  limit   // if you want from [0,limit)
    int size = rand() %  limit + 1; // if you want from [1,limit]
    cout << size << endl;
    for(int i = 0; i < size; i++){
        cout << rand() % limit << " ";
    }
}


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


void solve(){
    int size;
    cin >> size;
    int mini = INT_MAX,maxi = INT_MIN;
    bool answer = true;
    int a;
    for(int i = 0; i < size; i++){
        cin >> a;
        mini = min(mini,a);
        maxi = max(maxi,a);
        if(mini != a && maxi != a){
            answer = false;
        }
    }
    if(answer){
        cout << "YES" << endl;
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
