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

long long int getArguments(vector<int> answer,int index){
    map<int,int> freq;
    long long int count = 0;
    for(int i = 0; i < answer.size(); i++){
        freq[answer[i]]++;
    }
    for(auto ip = freq.begin(); ip != freq.end(); ip++){
        if(ip -> second > 1){
            if(ip->first == index){
                count -= 1;
            }
            count += ip->second;
        }
    }
    return count;
}

ll getRepeatedFreq(vec(int) answer,int index){
    return count(answer.begin(),answer.end(),index);
}

int main(){
    EXECUTE_FASTER
    testcase(){
       int size,cost;
        cin >> size >> cost;
        vec(int) guests,answer;
        vectorInput(guests,size);
        ll count = 1,arguments = 0,total = 0;
        answer.pb(guests[0]);
        ll result;
        for(auto it = guests.begin() + 1; it != guests.end(); it++){
            if(find(answer.begin(),answer.end(),*it) == answer.end()){
                answer.pb(*it);
            }else{]
        
                result = getArguments(answer,*it);
                if(cost  >  arguments + (result) && cost != 1){
                    arguments += result;
                }
                else{
                    total += arguments;
                    arguments = 0;
                    count++;
                    answer.clear();
                    answer.pb(*it);
                }
            }
        }
        cout << (count * cost) + arguments << endl;
    }
    return 0;
}