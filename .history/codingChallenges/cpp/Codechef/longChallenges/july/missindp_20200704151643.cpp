#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i= 0;i< n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define us unordered_set
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(int i=0;i<n;i++){ int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)
#define printMap(map,name,dataStr,data) for(map<dataStr,data>:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
int main(){
     EXECUTE_FASTER
    testcase(){
        int size;
        cin >> size;
        long int xcoordinate,ycoordinate;
        unordered_map<long int,long int> xpoints,ypoints;
        unordered_map<long int,long int> ::
        loop(4 * size - 1){
            cin >> xcoordinate >> ycoordinate;
            xpoints[xcoordinate]++;
            ypoints[ycoordinate]++;
            if(xpoints[xcoordinate] > 1){
                xpoints.erase(xcoordinate);
            }if(ypoints[ycoordinate] > 1){
                ypoints.erase(ycoordinate);
            }
        }
        // cout  << "xpoints  key    value   " << endl;
        // printMap(unordered_map,xpoints,long int,long int);
        // cout << "ypoints   key    value " << endl << "\t";
        // printMap(unordered_map,ypoints,long int,long int);
    }
    return 0;
}