#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    if(s.find(t) != string::npos){
        cout << "found\n";
    }else{
        cout << "Not"
    }

    return 0;
}