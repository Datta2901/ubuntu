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
#define MOD 1000000007
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

int solve(){
    int size,target;
    cin >> size >> target;
    int sum = 0;
    vector<int>h;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        h.push_back(a);
    }
    sort(h.begin(),h.end());
    set<int>h1;
    h1.insert(h[size - 1]);
    sum = h[size - 1];
    int z = -1;
    for(int i = size - 2; i >= 0; i--){
        set<int>h2;
        sum += h[i];
        set<int>::iterator i1 = h1.begin();
        while(i1 != h1.end()){
            int p =(*i1);
            h2.insert(p);
            h2.insert(h[i]);
            h2.insert(p + h[i]);
            if(((p + h[i]) >= target) && (sum - p - h[i] >= target)){
                z = size - i;
                break;
            }
            if((h[i] >= target) && (sum - h[i]) >= target){
                z = size - i;
                break;
            }
            i1++;
        }
        if(z != -1){
            break;
        }
        h1 = h2;
    }
    return z;      
}

int main(){
      EXECUTE_FASTER
      testcase(){
        cout << solve() << endl;
      }     
   return 0;
}
