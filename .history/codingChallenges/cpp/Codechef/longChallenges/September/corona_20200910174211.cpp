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

vector<vector<int>> calculateDistance(vector<int>velocity,int max,int size){
     vector< vector<int> > arr( 10 * max,vector<int> (size + 1, 0)); 
    for(int i = 0; i < 10 * max; i++){
        for(int j = 1; j <= size; j++){
            int a = j + velocity[j] * i;
            arr[i][j] = a;
        }   
    }
    return arr;
}

int main(){
   EXECUTE_FASTER
    testcase(){
        int size;
        cin >> size;
        vector<int> Velocity;
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
        vector< vector<int> > arr( 100 * max,vector<int> (size + 1, 0)); 
        arr = calculateDistance(Velocity,max,size);
        map<int,set<int>>number;

        for(int i = 0; i < 10 * max; i++){
            for(int j = 1; j <= size; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        for(int i = 0; i < 10 * max; i++){
            for(int j = 1; j <= size; j++){
                for(int k = 1; k <= size; k++){
                    if(arr[i][j] == arr[i][k]){
                        number[j].insert(k);
                    }
                }
            }
        }

        vector<int> answer;
        for(auto it = number.begin(); it != number.end(); it++){
            cout << it->first << " --------------> ";
            for(auto ip = (it->second).begin(); ip != (it->second).end(); ip++){
                cout << *ip << " ";
            }
            cout << endl;
        }

        for(auto it = number.begin(); it != number.end(); it++){
            answer.pb((it->second).size());
        }
        int min = INT_MAX;
        max = INT_MIN;
        for(int i = 0; i < answer.size(); i++){
            if(min > answer[i]){
                min = answer[i];
            }if(max < answer[i]){
                max = answer[i];
            }
        }
        cout << min << " " << max << endl;
    }
    return 0;
}