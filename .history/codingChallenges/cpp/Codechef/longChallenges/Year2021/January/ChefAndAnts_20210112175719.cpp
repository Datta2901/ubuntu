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
#define collisions make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printVector(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define printVectorofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define printMapOfVector(name,dataStr) for(map<dataStr ,vector<dataStr> > :: iterator it = name.begin(); it != name.end(); it++){cout << it->first << "  : ";for(vector<vector<int>>::iterator ip = it->second.begin() ; ip != it->second.end(); ip++){  cout << *ip << " ";}cout << endl;}
#define MOD 1000000007
#define trav(a,b) for(auto a : b)
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

long int SubTask1(int n, int size){
    long int pos = 0,neg = 0;
    for(int i = 0; i < size; i++){
        long int a;
        cin >> a;
        if(a > 0){
            pos += 1;
        }else{
            neg += 1;
        }
    }
    return pos * neg;
}
long long int SubTask2(int n){
    vector<vector<int>> positions(n);
    unordered_map<int,int> collisions;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        for(int j = 0; j < m; j++){
            int a;
            cin >> a;
            positions[i].pb(a);
            collisions[abs(a)]++
        }
    }
    long long int answer = 0;
    for(auto ant : collisions){
        if(ant.second > 1){
            answer++;
        }
    }

    vector<int>pos,neg;
    for(auto line : positions){
        for(auto ant : line){
            if(ant > 0){
                pos.insert(pos.begin(),ant);
            }else{
                neg.push_back(ant);
            }
        }
    }

    int nearest;
    while(true){
        if(pos.empty() && neg.empty()){
            break;
        }if(pos.empty()){
            nearest = neg.back();
        }if(neg.empty()){
            nearest = pos.back();
        }else{
            nearest = pos.back()<abs(neg.back())?pos.back():neg.back();
        }
    }

    if(nearest<0){
        if(collisions[abs(nearest)]>1){   // means colliding at origin
            answer += neg.size()-1;
        }else{
            answer += pos.size();
        }
    }else{
            
        if(collisions[abs(nearest)]>1){
            answer+= pos.size()-1;
        }else{
            answer+= neg.size();
        }   
    }if(nearest< 0){
        neg.pop_back();
        
    }else{
        pos.pop_back();
    }
    
    return answer;    
}

int main(){
      EXECUTE_FASTER
      testcase(){
        long int n;int size;
        cin >> n;
        if(n == 1){
            //subtask 1
            cin >> size;
            long int answer = SubTask1(n,size);
            cout << answer << endl; 
            continue;
        }
        // subtask 2;
        if(n > 1){
            long long int answer;
            answer = SubTask2(n);
            cout << answer << endl;
        } 
    }
   return 0;
}
