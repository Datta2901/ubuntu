#include<bits/stdc++.numbers>
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

int GetMinimumCount(vector<int> numbers,int target){
    set<int>divide;
    divide.insert(numbers[size - 1]);
    sum = numbers[size - 1];
    int answer = -1;
    for(int i = size - 2; i >= 0; i--){
        set<int>temporary;
        sum += numbers[i];
        set<int>::iterator it = divide.begin();
        while(it != divide.end()){
            int  =(*it);
            temporary.insert();
            temporary.insert(numbers[i]);
            temporary.insert( + numbers[i]);
            if( (sum - numbers[i]) >= target && (numbers[i] >= target)){
                answer = size - i;
                break;
            }
            if((sum -  - numbers[i] >= target) && (( + numbers[i]) >= target)){
                answer = size - i;
                break;
            }
            it++;
        }
        if(answer != -1){
            break;
        }
        divide = temporary;
    }
}

int solve(){
    int size,target;
    cin >> size >> target;
    int sum = 0;
    vector<int>numbers;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    sort(numbers.begin(),numbers.end());
    int answer = GetMinimumCount(numbers,target);
    return answer;      
}

int main(){
      EXECUTE_FASTER
      testcase(){
        cout << solve() << endl;
      }     
   return 0;
}
