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

bool isPowerofTwo(int a){
    if(ceil(log2(a)) == floor(log2(a))){
        return true;
    }
    return false;
}

int main(){
//    EXECUTE_FASTER
    testcase(){
        int number,temp;
        cin >> number;
        if(isPowerofTwo(number)){
            cout << -1 << endl;
            continue;
        }
        if(number >= 1 && number <= 9){
            if(number % 4 == 0){
                cout << -1 << endl;
            }if(number == 1){
                cout << -1 << endl;
            }if(number == 3){
                cout <<"2 3 1"<< endl;
            }if(number == 5){
                cout <<"2 3 1 5 4"<< endl;
            }if(number == 6){
                cout << "2 3 1 5 4 6" << endl;
            }if(number == 7){
                cout <<"2 3 1 5 4 6 7"<< endl;
            }if(number == 9){
                cout <<"2 3 1 5 4 6 7 9 8"<< endl;
            }
        }else{
            cout << "2 3 1 5 4 6 7 9 8 ";
            for(int i = 10; i <= number; i++){
                if(!isPowerofTwo(i)){
                    cout << i <<" ";
                }else{
                   if(i + 1 <= number){
                        cout << i + 1 << " " <<  i << " ";
                        i++;
                   }
                }
            }
            cout << endl;
        }

    }
   return 0;
}