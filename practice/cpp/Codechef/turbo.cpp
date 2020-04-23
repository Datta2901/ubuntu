#include <iostream>
#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
        EXECUTE_FASTER ;
        int a;
        vector<int>numbers;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a;
            numbers.push_back(a);
        }

        sort(numbers.begin(),numbers.end(),greater<int>());

        for(int i = 0; i < n; i++){
            cout << numbers[i] << endl; 
        }

    return 0 ;
}    