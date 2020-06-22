#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<=n;i++)
#define pb push_back
#define in insert
#define inc_sort(v) sort(v.begin(),v.end());
#define endl '\n'
using namespace std;


int main(){
    EXECUTE_FASTER
    int num1,num2,num3,a;
    cin >> num1 >> num2 >> num3;
    vector<int> voterslist;
    set<int> finallist;
    loop(num1){
        cin >> a;
        voterslist.pb(a);
        finallist.in(a);
    }
    loop(num2){
        cin >> a;
        voterslist.pb(a);
        finallist.in(a);
    }
    loop(num3){
        cin >> a;
        voterslist.pb(a);
        finallist.in(a);
    }

    for(set<int> ::iterator it = finallist.begin(); it != finallist.end(); it++){
        if(count(voterslist.begin(),voterslist.end(),*it) >= 2){
            cout << *it << endl; 
        }
    }


    
    return 0;
}