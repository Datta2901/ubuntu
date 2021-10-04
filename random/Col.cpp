#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    char s[n + 1][n + 1];
    vector<int>answer;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> s[i][j];
            cout << s[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(s[i][j] == 'S'){
                answer.push_back(j);
            }
        }
    }

    int sum = 0;    

    for(int i = 0; i < answer.size(); i++){
        sum += answer[i];
        // cout <<  sum << " ";
    }

    cout << (float(sum )/ n) << endl;

    return 0;
}
