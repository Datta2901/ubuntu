#include<bits/stdc++.h>
using namespace std;

int LengthOfOnv


int main(){
    int size;
    cin >> size;
    vector<int> arr;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << LengthOfIncreasingSubsequence(arr) << endl;

    return 0;
}