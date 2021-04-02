// Number of subsets with thw given sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum,size;
    vector<int> numbers;
    cin >> size >> size;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }

    cout << getCount(numbers,size,sum) << endl;//
    return 0;
}