#include <iostream>
#include <bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t,n,cost,a,b;
    cin>>t;
    while(t--){ 

        cin >> n;
        cin >> cost;
        vector<int> price;
        vector<int>zero;
        vector<int>one;
        for(int i = 0; i < n; i++){
            cin >> a;
            price.push_back(a);
        }

        for(int i = 0; i < n; i++){
            cin >> b;
            if(b == 0){
                zero.push_back(price[i]);
            }if(b == 1){
                one.push_back(price[i]);
            }
        }

        sort(zero.begin(),zero.end());
        sort(one.begin(),one.end());
        if(zero.size() == 0 ||one.size() == 0){
            cout << "no\n" ;
        }

        if((zero[0] + one[0] + cost) <= 100){
            cout << "yes\n"; 
        }else{
            cout << "no\n";
        }
    }
    return 0;

}   