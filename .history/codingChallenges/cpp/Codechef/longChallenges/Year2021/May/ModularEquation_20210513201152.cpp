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
        set< pair<int,int> > freq,guess;
        for(int i = 1; i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                if(Modulo(m,i,j) == Modulo(m,j,i)){
                    freq.insert(make_pair(min(i,j),max(i,j)));
                }else{
                    guess.insert(make_pair(min(i,j),max(i,j)));
                }
            }
        }
        for(auto i : guess){
            cout << i.
        }
        // cout<< freq.size() << endl;
        // cout << (freq.size() == (n * n - n) / 2) << endl;
    }
    return 0;
}