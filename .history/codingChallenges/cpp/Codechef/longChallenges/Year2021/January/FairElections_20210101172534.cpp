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
#define ll long int
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


int main(){
   EXECUTE_FASTER
   testcase(){
        int n,m;
        cin >> n >> m;
        vec(int) John,Jack;
        ll JohnVotes = 0,JackVotes = 0;
        loop(n){
            int a;
            cin >> a;
            John.pb(a);
            JohnVotes += a;
        }
        loop(m){
            int a;
            cin >> a;
            Jack.pb(a);
            JackVotes += a;
        }
        if(JohnVotes > JackVotes){
            cout << 0 << endl;
            continue;
        }
        int answer = 0;
        inc_sort(John);
        inc_sort(Jack);
        bool flag = fal 
        for(int i = 0; i < n; i++){
            if(JohnVotes < JackVotes){
                JohnVotes = JohnVotes - John[i] + Jack[Jack.size()- 1];
                JackVotes = JackVotes - Jack[Jack.size()- 1] + John[i];
                Jack.pop_back();
                answer++;
            }
            if(JohnVotes > JackVotes){
                break;
            }

        }

   }
}