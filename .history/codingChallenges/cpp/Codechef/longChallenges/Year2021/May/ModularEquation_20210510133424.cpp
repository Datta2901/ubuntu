#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int Modulo(int m,int a ,int b){
    return (m % a) %b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        set< pair<int,int> > freq;
        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                if(Modulo(m,i,j) == Modulo(m,j,i)){
                    freq.insert(make_pair(min(i,j),max(i,j)));
                }
            }
        }

        // for(auto it = freq.begin(); it != freq.end(); it++){
        //     cout << it->first << " " << it->second << endl;
        // }
        cout<< freq.size() << endl;
        cout << (freq.size() == (n * n - n) / 2) << endl;
    }

    return 0;
}