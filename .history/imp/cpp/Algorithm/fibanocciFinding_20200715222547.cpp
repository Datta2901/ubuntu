#include<bits/stdc++.h>
using namespace std;
int arr[3];
int I[3][3],T[3][3];

getFibanocci(int n)

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