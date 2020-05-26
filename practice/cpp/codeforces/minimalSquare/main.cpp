#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<iterator>
#include<string>
#include<map>
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define MOD 1000000007
#define ll long long int 
#define loop(n) for(int i=0;i<n;i++)
#define vec(datStruct) vector<datStruct>
#define testcase() int t; cin >> t; while(t--)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
int main()
 {
    EXECUTE_FASTER
    int size;
    int a;
    testcase(){
        cin >> size;
        set<int> input,answer;
        multiset<int> recipes,ingTypes,count;
        for(int i = 0; i < size; i++){
           cin >> a;
           input.insert(a);
           ingTypes.insert(a);
           count.insert(a);
        }

         unique(count.begin(),count.end());
         
        for(set<int>::iterator it = input.begin(); it != input.end(); it++){
            recipes.insert(ingTypes.count(*it));
            answer.insert(ingTypes.count(*it));
        }
      
        if(recipes.size() == answer.size()){
           cout << "YES\n";
        }else{
           cout << "NO\n";
        }
        
    }
    return 0;
 }