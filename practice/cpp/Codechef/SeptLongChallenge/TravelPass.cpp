#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int count0 = 0;
        int size = s.size();
        for(int i = 0; i < size; i++){
            if(s[i] == '0'){
                count0++;
            }
        }
        int answer = (count0 * (a) + (size - count0) * b);
        cout << answer << endl;
    }

    return 0;
}