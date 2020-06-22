#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(n) for(int i=0;i<n;i++)
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
#define loop1(n) for(int i=1;i<n;i++)
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER
    int t;
    int year[5]= {2010,2015,2016,2017,2019};
    cin >> t;
    while(t--){
        int n;bool flag = true;
        cin >> n;
        loop(5){
            if(n == year[i]){
                cout << "HOSTED\n";
                flag = false;
                continue;
            } 
        }
        if(flag){
            cout << "NOT HOSTED\n";
        }    
    }
    return 0;
}