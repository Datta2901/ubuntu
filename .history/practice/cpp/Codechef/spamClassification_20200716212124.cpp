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
        if(r - l + 1 == r + l){
            if(bias % 2 == 0){
                cout << r - l + 1 << " " << 0 <<  endl;
            }else if(bias % 2 == 1){
                cout <<  0 << " " << r - l - 1 << endl;
            }
        }
        i
    }
    return 0;
}