#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        int fmax = -1,smax = -1;
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            if(fmax < a){
                smax = fmax;
                fmax = a;
            }else if(smax < a){
                smax = a;
            }
        }
        cout << fmax * smax << endl;
    }
    return 0;
}