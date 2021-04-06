#include <bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#include<queue>
using namespace std;

/* iterators */
#define begin b
#define end e
#define iterator it
#define itloop(dataType,DataStruct,name) for(dataType<DataStruct>::it ip = name.b(); ip != name.e(); ip++)

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

#define inc_sort(v) sort(v.begin(),v.end());
#define printVect(DataType,vect,dataStruct) for(DataType <dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define EXECUTE_FASTER ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


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
ll modpow(ll x, ll y,ll m){ 
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
ll modinv(ll x, ll m){
	return modpow(x,m-2,m);
}


//GCD  
ll gcd(ll a,ll b){
	if(a == 0)return b;
	return gcd(b % a, a);	
}

// Binary search
int binarySearch(int arr[], int l, int r, int key) { 
    while (l <= r) { 
        int mid = l + (r - l) / 2; 
  
        // Check if x is present at mid 
        if (arr[mid] == key) 
            return mid; 
  
        // If x greater, ignore left half 
        if (arr[mid] < key) 
            l = mid + 1; 
  
        // If x is smaller, ignore right half 
        else
            r = mid - 1; 
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1; 
}
// or inbuilt binary search in stl
// 1. sort the array
// binary_search(startaddress, endaddress, valuetofind)


//given decimal  number returns a binary number
void getBinary(ll n,vector<ll> & vect ){
    ll c =0,ans = 0;
    for(ll a=0,b=0,i=0;n>0;n=n/2,i++){
      a = n/2 ;
      b = n%2 ;
      //vect.insert(vect.begin(),b);
    }
} 

// given  binary returns a decimal number
ll getDecimal(vector<ll> & binC){
    ll n=0,c =0;
   for(ll i = binC.size()-1,b = 0; i >=0; i--,b++){
        n += binC[i]*pow(10,b);
    }
    for(ll a,i = 0;n > 0; i++,n = n/10){
        a =n%10 ;
        c =(pow(2,i))*a+c ; 
    }
    
    return c;
}

int ar[n];

int ternary_search(int l,int r, int x)
{
    if(r>=l)
    {
        int mid1 = l + (r-l)/3;
        int mid2 = r -  (r-l)/3;
        if(ar[mid1] == x)
            return mid1;
        if(ar[mid2] == x)
            return mid2;
        if(x<ar[mid1])
            return ternary_search(l,mid1-1,x);
        else if(x>ar[mid2])
            return ternary_search(mid2+1,r,x);
        else
            return ternary_search(mid1+1,mid2-1,x);

    }
    return -1;
}