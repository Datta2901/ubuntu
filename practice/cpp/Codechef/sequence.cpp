#include<iostream>
#include<vector>
using namespace std;
int main(){

    int t,n,c=0,k;
    cin >> t ;
    while(t--){
        vector<int> data;
        cin  >> n ;
        cin >> k;
        for(int i = 0; i < n; i++ ){
           int t; 
            cin >> t;
            data.push_back(t);
            if(t == 1){
                c++;
            }
        }
        if(c <= k){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

return 0 ;
}