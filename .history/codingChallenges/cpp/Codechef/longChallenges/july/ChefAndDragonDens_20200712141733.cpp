#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#include<unordered_map>
#define F first
#define S second
#define MP make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}cout << endl;
#define printVectofPairs(name,dataStr) for(vector<pair<dataStr,dataStr> >:: iterator it = name.begin(); it != name.end(); it++){ cout << it->first << " " << it->second << endl;}
#define MOD 1000000007
#define ll long  int 
#define loop(n) for(int i= 0;i< n;i++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(n,a) for(int i=a;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectInput(vect,n) for(long int i=0;i<n;i++){ long int a; cin >> a; vect.pb(a);}
#define testcase() int t; cin >> t; while(t--)

long long int findele;

bool isEqual(const pair<long int ,long int> & element){
    return element.second == findele;
}

long int sum(vector<pair<long int,long int> > heights,long int a,long int b){
    for(long int i = min(a,b); i < heights.end(); i++)

}
int main(){
    vector<long int> taste;
    vector<pair<long int,long int> > heights;
    int size,Queries;
    cin >> size >> Queries;
    loop(size){
        long int a;
        cin >> a;
        heights.pb({a,i+1});
    }
    vectInput(taste,size);
    // printVect(taste,long int);
    cout << "Before sorting ";
    printVectofPairs(heights,long int);
    sort(heights.begin(),heights.end());
    cout << "After sorting ";
    printVectofPairs(heights,long int);
    
    while(Queries--){
        long int a,b,c;
        cin >> a >> b >> c;
        if(a == 1){
            taste[b - 1] = c;
        }else{
            findele = b;
            vector<pair<long int,long int> > :: iterator  it = find_if(heights.begin(),heights.end(),isEqual);
            findele = c;
            vector<pair<long int,long int> > :: iterator  itr = find_if(heights.begin(),heights.end(),isEqual);
            // cout << it->first  << " " << it -> second << endl; 
            // cout << itr->first  << " " << itr -> second << endl; 
        }
    }


    return 0;
}