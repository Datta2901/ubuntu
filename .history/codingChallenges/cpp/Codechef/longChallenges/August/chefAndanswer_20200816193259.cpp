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

l GetArguments(vec(int) tables,vec(int) visited,int index){
    l answer = 0;
    if(find(visited.begin(),visited.end(),index) != visited.end()){
        return 1;
    }else{
        answer += count(tables.begin(),tables.end(),index);
    }
    return answer;
}

int main(){
    EXECUTE_FASTER
    testcase(){
        int size,cost;
        cin >> size >> cost;
        vec(int) guests,tables,visited;
        vectorInput(guests,size);
        long int arguments = 0, count = 1,result,sum = 0;
        tables.pb(guests[0]);
        visited.pb(guests-])
        for(auto it = guests.begin() + 1; it != guests.end(); it++){
            if(find(tables.begin(),tables.end(),*it) == tables.end()){
                tables.pb(*it);
            }else{
                tables.pb(*it);
                result = GetArguments(tables,visited,*it);
                if(cost > (result + sum) && cost != 1){
                    sum += result;
                    arguments += result;
                }else{
                    sum = 0;
                    count++;
                    tables.clear();
                    visited.clear();
                    tables.pb(*it);
                }    
            }
            visited.pb(*it);
        }
        cout <<(count * cost + arguments)<< endl;
    }
    return 0;
}