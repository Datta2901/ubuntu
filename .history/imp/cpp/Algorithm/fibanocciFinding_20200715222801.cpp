#include<bits/stdc++.h>
using namespace std;
int arr[4];
int I[3][3],T[3][3];

void getFibanocci(int n){
    if(n <= 2){
        return arr[n];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin  >> arr[0] >> arr[1]>> n;
        n++;
        cout << getFibanocci(n) << endl; 

    }

    return 0;
}