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
#define loopv(i, n) for (int i = 0; i < n; i++)
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

class Street_details{
    public:
    int Start_intersec,end_intersec,TimeTaken;
    string StreetName;
};


int main(){
    // cout << "3\n1\n2\nrue-d-athenes 2\nrue-d-amsterdam 1\n0\n1\nrue-de-londres 2\n2\n1\nrue-de-moscou 1";
    int time,intersection,streets,cars,points;
    cin >> time >> intersection >> streets >> cars >> points;
    vector<details>Route;
    map<int,vector<string>> Destination;
    //
    loop(streets){
        Street_details obj;
        cin >> obj.Start_intersec <<  obj.end_intersec << obj.StreetName << obj.TimeTaken;
        Route.push_back(obj);
    }

    loop(cars){
        int RouteSize;
        cin >> RouteSize;
        loopv(j,RouteSize){
            string streetName;
            cin >> streetName;
            Destination[i].push_back(streetName);
        }
    }



   return 0;
}

 