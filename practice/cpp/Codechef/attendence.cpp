#include<bits/stdc++.h>
using namespace std ;
int main(){

int t;
cin >> t;
while(t--){

    vector<string> first,last;
    string a,b;
    bool flag;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        first.push_back(a);
        last.push_back(b);
    }

    for(int i = 0; i < n; i++){
        flag = false;
        for(int j = 0; j < n; j++){
            if(first[i] == first[j]){
                flag = true;
            }
        }

        if(flag){
            cout << first[i] << " " << last[i] << endl; 
        }else{
            cout << first[i] << endl;
        }
    }
}



    return 0;
}