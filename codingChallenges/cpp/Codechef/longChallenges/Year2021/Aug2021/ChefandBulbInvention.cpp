#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define vv vector
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define printVectorofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printMapOfVector(name,dataStr) for(map<dataStr ,vector<dataStr> > :: iterator it = name.begin(); it != name.end(); it++){cout << it->first << "  : ";for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){  cout << *ip << " ";}cout << endl;}
#define MOD 1000000001
#define ll long long int 
#define l long int
#define loop(n)for(int i = 0; i < n; i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectorInput(vect,n)for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

typedef pair<int,int> ele;
typedef vector< vector<int> > matrix;
typedef pair<ele,ele> box;
typedef map<box,int> boxSum ;


void solve(){
    int size,p,k;
    cin >> size >> p >> k ;
    int temp;
    vector<int> adj[k];
    for(int i = 0; i < size; i++){
        temp = i % k;
        adj[temp].push_back(i);
    } 
    int count = 0,answer = 0;
    for(auto it : adj){
        cout << count <<" ----------------> ";
        for(auto itr : it){
            cout << itr << " ";
        }
        count++;
        cout << " ----> Size ---> " << it.size() << endl;
    }
    bool control = false;
    for(auto it : adj){
        for(auto itr : it){
            if(itr == p){
                control = true;
                break;
            }
            answer++;
        }
        if(control){
            break;
        }
        count++;
    }
    cout << answer + 1 << endl;
}


void ApSeries(){
    int n,p,k;
    cin >> n >> p >> k;
    int rem = p % k;
    // cout << (rem)*round(float(n) / k) + round(float(p) / k) + 1  << endl;
    int t = (((p - rem) / k) + 1);// find nth term in ap
    if(k == 1){
        k++;
    }
    cout << (rem)*((n) /( k - 1)) + t  << endl;
}


int main(){
    EXECUTE_FASTER
    testcase(){
        // solve();
        ApSeries();
    }
   return 0;
}
