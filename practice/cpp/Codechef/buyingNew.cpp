#include <iostream>
#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){

    EXECUTE_FASTER;
    int t,a,b;
    cin >> t;
    int budget,shops,rate;   
    while(t--){
        bool flag =false;
        cin >> shops;
        cin >> budget;
        vector<long long int>size;
        for(int i = 0; i < shops; i++){
            cin >> a >> b >> rate;
            if(rate <= budget){
               size.push_back(a*b);
                flag = true;
            }

            sort(size.begin(),size.end(),greater<long int>());
            if(flag){
                cout << size[0] << endl;
            }
            else{
                cout << "no tablet" << endl;
            }
        }
    }




    return 0 ;

}