#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long int size,l,r;
        cin >> size >> l >> r;
        int weight,bias;
        for(int i = 0; i < size; i++){
            cin >> weight >> bias;
        }
        if(bias % 2 == 0){
            cout << r - l + 1 << "" endl;
        }else{

        }
    }
    return 0;
}