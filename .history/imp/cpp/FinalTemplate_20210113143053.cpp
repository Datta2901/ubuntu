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
#define begin bb
#define end ee
#define iterator it
#define itloop(dataType,DataStruct,name) for(dataType<DataStruct>::it ip = name.b(); ip != name.e(); ip++)
/************************Pre processors & typedefs************************/
#define pb push_back
#define mp make_pair 
#define fr first
#define ss second
#define sz size
#define clr(a) memset(a, 0, sizeof(a))
#define sz(x) x.size()
//loop
#define loop(n) for (int i = 0; i < n; i++)
#define loopv(i, n) for (int i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
//precision
#define preciset(x) cout<<setprecision(x)<<fixed;
// datatypes
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pi;
typedef vector<ll> vi;

#define inc_sort(v) sort(v.begin(),v.end());
#define printVector(DataType,vect,dataStruct) for(DataType <dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define EXECUTE_FASTER ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//debug
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
	std::cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
// constants
const int mod = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);

//User Defined F
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



