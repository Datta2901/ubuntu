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
#define re(s,e,var) for(int i = s; i <= e; i++)
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

vector<int> calculate(vector<int> velocity,int max,int size){
    set<ll> Equal;
    vector<int> time;
    for(int i = 0; i < 4 * max; i++){
        for(int j = 1; j <= size; j++){
            ll a = j + velocity[j] * i;
            Equal.insert(a);
        } 
        time.pb(1 + (size - (Equal.size())));
        Equal.clear();
    }
    return time;
}

int main(){
   EXECUTE_FASTER
    testcase(){
        int size;
        cin >> size;
        vector<int> Velocity,time;
        Velocity.pb(0);
        int max = INT_MIN;
        re(1,size,i){
            int a;
            cin >> a;
            Velocity.pb(a);
            if(max < a){
                max = a;
            }
        }
        if(max == 0){
            cout << 1 << " " << 1 << endl;
            continue;
        }
        time = calculate(Velocity,max,size);
        sort(time.begin(),time.end());
        if(time[0] == time[time.size() - 1]){
            cout << time[0] << " " << time[0] << endl;
        }else if(time[time.size() - 1] == size){
            cout << size << " " << size << endl;
        }else{
            cout << time[0] << " " << time[time.size() - 1] << endl;
        }
    }
   return 0;
}
