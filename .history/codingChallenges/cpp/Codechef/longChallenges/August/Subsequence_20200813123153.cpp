#include<iostream>
#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
long long int modularExponentiation(long long int n,long long int base){
    long long int result = 1;
    while(n){
        if(base % 2 == 0){
            result = (result * base) % MOD;
            n--; 
        }else{
           base = (base * base ) % MOD;
           n /= 2;
        }
    }
    return result;
}

int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        vector<int> data;
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            data.push_back(a);
        }
        vector<long long int> number;
        for(int i = 0; i < size; i++){
            // if(pow(2,i) >= MOD){
            //     cout << modularExponentiation(i,2)  << " ";
            // }else{
            //     cout << pow(2,i)  << " ";
            // }
            cout << (long long int)pow(2,i) << " " ;
        }
        cout << endl;
    }
   
}


// 1 2 3 4 5 6
// 1 - 32
// 2 - 16
// 3 - 8
// 4 - 4
// 5 - 2
// 6 - 1



// 1 2 3 4 5

// 1,{1,2}.{1,3},{1,4},{1,5},{1,2,3},{1,2,4},{1,2,5},{1,3,4},{1,3,5},{1,4,5},{1,2,3,4},{1,2,3,5},{1,3,4,5},{1,2,4,5},{1,2,3,4,5} - 16

// 2,{2,3},{2,4},{2,5},{2,3,4},{2,3,5},{2,4,5},{2,3,4,5} - 8

// 3,{3,4},{3,5},{3,4,5} - 4

// 4,{4,5} - 2

// 5   - 1



// 1 2 3 4 

// 1.{1,2},{1,3},{1,4},{1,2,3},{1,2,4},{1,3,4}, {1,2,3,4} - 8
// 2,{2,3},{2,4},{2,3,4} - 4
// 3,{3,4} - 2
// 4 - 1


// 1 2 3
// 1,{1,2},{1,3},{1,2,3} - 4
// 2,{2,3} - 2
// 3 - 1

// 1 2
// 1,{1,2} - 2
// 2 - 1

// 1
// 1 - 1