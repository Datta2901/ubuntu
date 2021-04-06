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

long l

int main(){
      EXECUTE_FASTER
      testcase(){
          long int n;
          cin >> n;
          int size;
          cin >> size;
          long int pos = 0,neg = 0;
          if(n == 1){
              //subtask 1
            for(int i = 0; i < size; i++){
                long int a;
                cin >> a;
                if(a > 0){
                    pos += 1;
                }else{
                    neg += 1;
                }
            }
            cout << pos * neg << endl; 
            }
            // subtask 2;
            if(n > 1){
                vector<vector<int>> positions;
                map<int,int> collisions;
                long long int answer = 0;
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < size; j++){
                        int a;
                        cin >> a;
                        positions[i].pb(a);
                        collisions[abs(a)]++;
                    }
                }

                // collisions at O
                for(map<int,int>::iterator it = collisions.begin(); it != collisions.end(); it++){
                    answer += (it->second > 1);
                }
                // collisions on line
                for(auto it = positions.begin(); it != positions.end(); it++){
                     vector<int>pos,neg; // store distances at respective sides
                   for(auto itr = it->begin(); itr != it->end(); itr++){
                        if(*itr > 0){
                            pos.insert(pos.begin(),*itr);
                        }else{
                            neg.pb(*itr);
                        }
                   }
                   while(true){
                       int nearestAnt;// taking the closest ant nearrer to origin
                       if(pos.empty()){
                           nearestAnt = neg.back();
                       }if(neg.empty()){
                           nearestAnt = pos.back();
                       }if(pos.empty() && neg.empty()){
                           break;
                       }else{
                           nearestAnt = (abs(neg.back()) > pos.back()) ? pos.back(): neg.back();
                       }
                       if(nearestAnt > 0){// it closest is positive side
                           if(collisions[nearestAnt] > 1){// if it collides at origin and get back to the pos side 
                               answer += pos.size() - 1;// -1 since we already counted the collisions at origin
                           }else{//and it  wont collide at origin continues to moves so go to negative side
                               answer += neg.size();
                           }
                       }else{
                           if(collisions[nearestAnt] > 1){
                               answer += neg.size() - 1;
                           }else{
                               answer += pos.size();
                           }
                       }
                   }
                }
                cout << answer << endl;
            } 
        }
   return 0;
}