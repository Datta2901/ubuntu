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

int FindThePosition(vector<int>numbers,int target,int index) {
    int min = INT_MAX, answer;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] == target) {
            if(abs(index-i) < min){
                min = abs(index-i);
                answer = i;
            }
        }
    }
return answer;
}

int main(){
   EXECUTE_FASTER
   testcase(){
       int size,target,index,smallest;
        cin >> size >> target >> index >> smallest;
        vector<int>numbers;
        vectorInput(numbers,size)
        inc_sort(numbers);
        int pos = FindThePosition(numbers,target,index);
        int count = 0;
        if(a[pos] != target){
            a[smallest-1] = target;
            sort(a, a+size);
            count++;
        }
        if(a[index-1] == target){
            cout << count << endl;
            return;
        }
        if(index < smallest && a[index-1] < target ||index > smallest && a[index-1] > target) {
            cout << -1 << endl;
        return;
        }
    pos = FindThePosition(a, size, target, index) + 1;
    cout << abs(index-pos)+count << endl;
   }
   return 0;
}