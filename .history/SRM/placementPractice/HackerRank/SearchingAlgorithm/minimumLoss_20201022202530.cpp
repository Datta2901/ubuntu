#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define printVectorofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printMapOfVector(name,dataStr) for(map<dataStr ,vector<dataStr> > :: iterator it = name.begin(); it != name.end(); it++){cout << it->first << "  : ";for(auto ip = it->second.begin() ; ip != it->second.end(); ip++){  cout << *ip << " ";}cout << endl;}
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectorInput(vect,n)for(int i=0;i<n;i++){ int diff; cin >> diff; vect.pb(diff);}
#define testcase() int t; cin >> t; while(t--)

int main(){
   EXECUTE_FASTER
   int size;
   cin >> size;
   vector<int>prices;
   vectorInput(prices,size);
    int minimum = INT_MAX;
    inc_sort(prices);
    for(int i = size - 1; i > 0 i--){
        for(j=i-1;j>=0;j--) {
            if(prices[i] > prices[j]) {
                int diff = prices[i] -prices[j];
                if(diff < minimum)
                    minimum = diff;
                break;
            }
        }
    }
    
    cout << minimum << endl;
   return 0;
}