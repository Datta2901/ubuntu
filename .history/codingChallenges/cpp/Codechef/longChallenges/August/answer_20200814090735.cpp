#include<bits/stdc++.h>
using namespace std;
#define Mod 1,000,000,007

long long int modularExponentiation(long long int num,long long int base){

    num = num % Mod;
    

}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int size;
        cin >> size;
        vector<long long int> data;
        for(int i = 0; i < size; i++){
            long long int a;
            cin >> a;
            data.push_back(a);
        }

        for(int i = 0; i < size; i++){
            cout << modularExponentiation(2,size - i,) << " ";
        }
        cout << endl;

    }
    return 0;
}