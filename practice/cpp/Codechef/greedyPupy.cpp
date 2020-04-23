#include<bits/stdc++.h>
#include <iostream>
#include<cmath>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    int t;
    cin>>t;
    while(t--){
        int coins,persons;
        cin >> coins >> persons;
        int share = 0;
        for(persons = persons; persons >=  2; persons--){
            share = max(share,coins % persons);
        }
        cout<< share <<endl;
    }
    return 0;
}