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

long int longest(vector<long int> hei,vector<long int> taste){
    // cout << number[0] << " ";
    long long int sum = number[0];
    int query = number[size - 1];
    for(int i = 1; i < size; i++){
        it = lower_bound(lis.begin(),lis.end(),number[i]);
        if((it == lis.end() && number[i] <= number[size - 1]) || number[i] == *it){
            lis.push_back(number[i]);
            cout << number[i] << " ";
            sum += number[i];
        }
}

long int requiredSum(vector<long int> hei,vector<long int> taste,long int a,long int b){

    if(height[a] > height[b]){

    }else if(height[a] == height[b]){
        return 
    }
    
}

int main(){
    vector<long int> taste,hei;
    int size,Queries;
    cin >> size >> Queries;
    loop(size){
        long int a;
        cin >> a;
        hei.pb(a);
    }
    vectInput(taste,size);
    // printVect(taste,long int); 
    while(Queries--){
        long int a,b,c;
        cin >> a >> b >> c;
        if(a == 1){
            taste[b - 1] = c;
        }else{
            requiredSum(hei,taste,b - 1,c - 1);
        }
    }


    return 0;
}