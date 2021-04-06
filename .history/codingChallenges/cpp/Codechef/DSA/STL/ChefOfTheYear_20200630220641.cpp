#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i= 0;i< n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)


int main(){
    EXECUTE_FASTER
    int n,m;
    cin >> n >> m;
    map<string,string> country;
    map<string,int> CountryVotes;
    map<string,int> ChefVotes;
    string s,a;
    loop(n){
        cin >> s >> a ;
        country[s] = a;
    }
    
    string maxChef,maxCountry;
    int maxChefVotes = 0,maxCountryVotes = 0;
    loop(m){
        cin >> a;
        ChefVotes[a]++;
        CountryVotes[country[a]]++;
        if(ChefVotes[a] > maxChefVotes){
            maxChefVotes =  ChefVotes[a];
            maxChef = a;
        }else if(ChefVotes[a] == maxChefVotes){
            maxChef = min(a , maxChef);
        }if(CountryVotes[country[a]] > maxCountryVotes){
            maxCountryVotes = CountryVotes[a];
            maxCountry = country[a];
        }else if(CountryVotes[country[a]] == maxCountryVotes){
            maxCountry = min(maxCountry,country[a]);
        }
    }
    cout << maxCountry << endl;
    cout << maxChef << endl;

    return 0;
}