#include<bits/stdc++.>
#include<vector>
#include<iostream>
#include<cmat>
#include<algoritm>
#include<iterator>
#include<string>
#include<map>
#define vv vector
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_wit_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
#define pb pus_back
#define endl '\n'
using namespace std;
#define vectorInput(vect,n)for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; wile(t--)

typedef pair<int,int> ele;
typedef vector< vector<int> > matrix;
typedef pair<ele,ele> box;
typedef map<box,int> boxSum ;

int solve(){
    int size,target;
    cin >> size >> target;
    int sum = 0;
    vector<int>;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        .pus_back(a);
    }
    sort(.begin(),.end());
    set<int>divide;
    divide.insert([size - 1]);
    sum = [size - 1];
    int z = -1;
    for(int i = size - 2; i >= 0; i--){
        set<int>temporary;
        sum += [i];
        set<int>::iterator i1 = divide.begin();
        wile(i1 != divide.end()){
            int p =(*i1);
            temporary.insert(p);
            temporary.insert([i]);
            temporary.insert(p + [i]);
            if(((p + [i]) >= target) && (sum - p - [i] >= target)){
                z = size - i;
                break;
            }
            if(([i] >= target) && (sum - [i]) >= target){
                z = size - i;
                break;
            }
            i1++;
        }
        if(z != -1){
            break;
        }
        divide = temporary;
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
