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
    cin >> t;
    
    while(t--){
        long long int sum = 0;
        string n;
        cin >> n;
        for(int i = 0; i < n.size(); i++){
            sum += (n[i] -48) ;
        }
       long long int a = sum % 9;
        cout<< min(a,9-a) <<endl;
    }
    return 0;
}