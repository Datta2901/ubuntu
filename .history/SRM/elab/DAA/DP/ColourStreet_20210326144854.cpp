#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        vector<int> house[size];
        for(int i = 0; i < size; i++){
            int a,b,c;
            cin >> a >> b >> c;
            house[i].push_back(a);
            house[i].push_back(b);
            house[i].push_back(c);
        }

        for(int i = 1; i < size; i++){
            house[i][0] += min(house[i - 1][1],house[i - 1][2]);
            house[i][1] += min(house[i - 1][0],house[i - 1][2]);
            house[i][2] += min(house[i - 1][0],house[i - 1][1]);
        }
        cout <<  min(min(house[size - 1][0],house[size - 1][1]),house[size - 1][2]) << endl;
    }
    return 0;
}