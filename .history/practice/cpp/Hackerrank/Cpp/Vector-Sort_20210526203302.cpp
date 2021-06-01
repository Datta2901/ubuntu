#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> numbers;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    sort(numbers.begin(),numbers.end());

    for(int i = 0; i < size; i++){
        cout << numbers[i]
    }

    return 0;
}