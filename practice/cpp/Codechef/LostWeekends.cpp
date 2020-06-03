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
    int a,sum;
    while(t--){
        sum = 0;
        for(int i = 0; i < 5; i++){
            cin >> a;
            sum += a;    
        }
        int hours;
        cin >> hours;
        if(sum * hours > 120){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }


    }
    return 0;
}