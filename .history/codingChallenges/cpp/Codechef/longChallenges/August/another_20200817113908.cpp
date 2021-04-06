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
#define frequency make_pair
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int 
#define loop(n)for(int i = 0; i < n; i++)
#define re(a,e,var) for(int var = a; var < e; var++)
#define rep(e,var) for(int var = 0; var < e; var++)
#define repeat(var,n,a) for(int var = a; var<= n; var++)
#define vec(datStruct) vector<datStruct>
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
#define vectorInput(vect,n)for(int i = 0;i < n; i++){ int a; cin >> a;vect[i] = a;}
#define testcase() int t; cin >> t; while(t--)
#define num 100
typedef pair<int,int> ele;
typedef vector< vector<int> > matrix;
typedef pair<ele,ele> box;
typedef map<box,int> boxSum ;

int main(){ 
    int t;
    cin >> t;
    while(t--){
        int size,cost;
        cin >> size >> cost;
        vec(ll) guests(size+1);
        map<int ,int>frequency;
        vectorInput(guests,size);
        vector<vector<int> >arrangement(size + 1,vector<int>(size + 1,0));
        rep(size,i){
            frequency.clear();
            re(i,size,j){
                if(j == 0){
                    arrangement[i][j] = 0;
                }else{
                    arrangement[i][j] = arrangement[i][j-1];
                }
                if(frequency.count(guests[j])){
                    if(frequency[guests[j]] == 1)
                    {
                        arrangement[i][j]++;
                    }
                    arrangement[i][j]++;
                }
                frequency[guests[j]]++;
            }
        }
 
    int inefficiency =INT_MAX;
    vector<vector<int> > arguments(101,vector<int> (1001,0));

    rep(size+1,i){
        arguments[1][i]=arrangement[0][i-1];
    }
    repeat(i,100,2){
        arguments[i][1]=0;
    }
    repeat(i,num,2){
        repeat(j,size,2){
            int minimum = INT_MAX;
            re(1,j,k){
                minimum = min(minimum ,arguments[i-1][k]+arrangement[k][j-1]);
            }
            arguments[i][j]= minimum ;
        }
    }

    repeat(i,num,1){
        inefficiency =min(i * cost + arguments[i][size],inefficiency);
    }
    cout << inefficiency << endl;
 
    }
 
}