#include<bits/stdc++.h>
#include <vector>
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

// finding the best postion
int FindThePosition(vector<int>numbers,int x, int required){
    int min = INT_MAX, minp;
    for(int i=0;i<;i++){
        if(numbers[i] == x) {
            if(abs(required-i) < min){
                min = abs(required-i);
                minp = i;
            }
        }
    }
return minp;
}
void solve() {
        int size, target, required, k;
        cin >> size >> target >> required >> k;
        vector<int>numbers(size);
        for(int i=0;i<size;i++){
            cin >> numbers[i];
        }
        inc_sort(numbers);
        int index = FindThePosition(numbers, target, required);
        int count = 0;
        if(numbers[index] != target){
            numbers[k-1] = target;
            inc_sort()
            count++;
        }
        if(numbers[required-1] == target){
            cout << count;
            return;
        }
        if(required < k && numbers[required-1] < target) {
            cout << -1;
        return;
        }
        if(required > k && numbers[required-1] > target){
        cout << -1;
        return;
        }
    index = FindThePosition(numbers, size, target, required) + 1;
    cout << abs(required-index)+count << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
return 0;
}