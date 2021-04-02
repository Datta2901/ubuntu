#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define printVectorofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printMapOfVector(name,dataStr) for(map<dataStr ,vector<dataStr> > :: iterator it = name.begin(); it != name.end(); it++){cout << it->first << "  : ";for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){  cout << *ip << " ";}cout << endl;}
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectorInput(vect,n)for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

int main(){
   EXECUTE_FASTER
    int n,m;
    cin >> n;
    vector<int>arr1,arr2,answer;
    vectorInput(arr1,n);
    cin >> m;
    vectorInput(arr2,m);
    int greatest = (m > n) ? m : n;
    if(greatest == n){
        for(int i = 0; i < abs(m-n); i++){
            arr2.pb(-1);
        }
    }else{
        for(int i = 0; i < abs(m-n); i++){
            arr1.pb(-1);
        }
    } 
    inc_sort(arr1);
    inc_sort(arr2);
    arr2.pb(-1);
    auto it = unique(arr1.begin(),arr1.end());
    for(int i = 0; i < n; i++){
        if(find(arr2.begin(),arr2.end(),arr1[i]) == arr2.end()){
            cout << arr1[i] << " ";
        }
    }
   return 0;
}