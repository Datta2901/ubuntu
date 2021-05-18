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
#define trav(dataType,DataStruct,name) for(dataType<DataStruct>::itt ip = name.bb(); ip != name.ee(); ip++)
//Pre processors & typedefs
#define pb push_back
#define mp make_pair 
#define fr first
#define ss second
#define clr(a) memset(a, 0, sizeof(a))
//loop
#define loop(n) for (int i = 0; i < n; i++)
#define loopv(i, n) for (int i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
//precision
#define Setpreci(x) cout << setprecision(x)<<fixed;
// datatypes
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pi;
typedef vector<ll> vi;
//Random imp
#define inc_sort(v) sort(v.begin(),v.end());
#define dec_sort(v) sort(v.begin(),v.end(),greater<int>());
#define EXECUTE_FASTER ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define printVectorofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printMapOfVector(name,dataStr) for(map<dataStr ,vector<dataStr> > :: iterator it = name.begin(); it != name.end(); it++){cout << it->first << "  : ";for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){  cout << *ip << " ";}cout << endl;}
#define vectorInput(vect,n)for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)
#define endl '\n'
//debug
#define deb(...) ZZ(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
	std::cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma , args...);
}

// constants
const int mod = 1e9 + 7;
const double eps = 1e-6;
const double pii = 1.00 * acos(-1.00);

//Important User Defined Functions
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

        if (arr[mid] == key){ 
            return mid; 
        }else if (arr[mid] < key){ 
            l = mid + 1;  
        }else{
            r = mid - 1; 
        }
    } 
    return -1; 
}

//given decimal  number returns a binary number
string getBinary(ll n){
    ll c =0,ans = 0;
    string binary = "";
    for(ll a=0,b=0,i=0;n>0;n=n/2,i++){
      a = n/2 ;
      b = n%2 ;
      binary += b;
    }
    return binary;
}

// given  binary returns a decimal number
ll getDecimal(string binC){
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

// to find the maximum power of 2 in a given number
ll GetMaximumPowerOf2(ll number){
    return(number & (~(number - 1)));
}

//Check whether given number is power of 2 or not
bool isPowerOf2(ll number){
    return (floor(log2(number)) == ceil(log2(number)));
}

//Get  number of digits of the given number
ll GetDigits(ll number){
    return floor(log10(number)) + 1; 
}

 
const int mxN=1e6+5;
int ans[mxN];
vector<bool> prime(mxN);
 
void isPrime(){
 
  for(int i=0;i<mxN;i++){
    prime[i]=true;
  }
 
  prime[0]=false;
  prime[1]=false;
 
  for(int p=2;p*p<mxN;p++){
    if(prime[p]){
      for(int i=p*p;i<mxN;i+=p){
        prime[i]=false;
      }
    }
  }
}

void solve(){
    //code starts from here 
    int size,queries;
    cin >> size >> queries;
    int countZero
    while(queries--){

    }
    
}

int main(){
    EXECUTE_FASTER
    solve();
    
   return 0;
}


