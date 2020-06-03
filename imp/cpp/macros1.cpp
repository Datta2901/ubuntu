#include <bits/stdc++.h>
using namespace std;

/************************Pre processors & typedefs************************/

#define pb push_back
#define mp make_pair 
#define fr first
#define sc second
#define clr(a) memset(a, 0, sizeof(a))
#define sz(x) x.size()

//loop
#define rep(n) for (ll i = 0; i < n; i++)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
//for selecting all of a vector or something
#define all(v) v.begin(), v.end()

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))

//all array
#define alla(a, n) a, a + n

//ignore extra line while taking input
#define clrbuf cin.ignore(numeric_limits<streamsize>::max(),'\n');

//precision
#define preciset(x) cout<<setprecision(x)<<fixed;


// datatypes
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;


#define FastIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
/*********************DEBUGGG*******************************************/
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
	std::cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
const ll INF = 0xFFFFFFFFFFFFFFFL;



/**********************CHECK RUN TIME*********************************/
clock_t time_p=clock();
void timeTaken()
{
	time_p=clock()-time_p;
	cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
}
ll seed;
mt19937 rng(seed=chrono::steady_clock::now().time_since_epoch().count());

inline ll rnd(ll l=0,ll r=INF){return uniform_int_distribution<ll>(l,r)(rng);}


/*************************CONSTANTS***************************************/

const int mod = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);



/*********************USER DEFINED FUNCTIONS****************************/
//Modulo power
ll modpow(ll x, ll y,ll m)
{ 
	ll res = 1;
	x=x%m;
	 while (y > 0) {
		  if (y & 1) res = ((res%m) * (x%m))%m;
		   y = y >> 1; 
		   x = ((x%m) * (x%m))%m; 
		 } 
		   return res%m; 
}

// modulo inverse
ll modinv(ll x, ll m)
{
	return modpow(x,m-2,m);
}


//GCD  
ll gcd(ll a,ll b)
{
	if(a==0)return b;
	return gcd(b%a,a);	
}
