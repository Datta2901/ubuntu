#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        vector<int> numbers;
        for(int i = 0; i < size; i++){
            int a;
            cin >> a;
            numbers.push_back(a);
        }
        int index1,index2;
        cin >> index1 >> index2;
        int sum = 0;
        sort(numbers.begin(),numbers.end());
        for(int i = index1; i < index2; i++){
            sum += numbers[i];
        }
        cout << sum << endl;
    }

    return 0;
}