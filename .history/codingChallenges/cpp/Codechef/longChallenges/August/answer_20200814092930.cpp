#include<bits/stdc++.h>
using namespace std;
#define Mod 1,000,000,007

long long int modularExponentiation(long long int num,long long int a){
    long long int result = 1; 
    while(a > 0){
        if(a & 1){
            result = (result * num) % Mod;
        }
        a /= 2;
        num = num * num;
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int size;
        cin >> size;
        vector<long long int> data;
        for(long long int i = 0; i < size; i++){
            long long int a;
            cin >> a;
            data.push_back(a);
        }
        for(long long int  i = 0; i < size; i++){
            cout << modularExponentiation(2,size - i) << " ";
        }
        cout << endl;

    }
    return 0;
}