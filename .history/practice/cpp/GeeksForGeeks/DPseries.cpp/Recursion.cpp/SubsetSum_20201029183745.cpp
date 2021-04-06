// Number of subsets with thw given sum
#include<bits/stdc++.h>
using namespace std;

int getCount(vector<int>numbers,int size,int sum){
    if(size == 0){
        if(sum == 0){
            return 1;
        }
        return 0;    
    }
    return (getCount(numbers[size - 1],size - 1, sum) + getCount(numbers[size - 1] ,size - 1,sum - numbers[size - 1]))
}

int main(){
    int sum,size;
    vector<int> numbers;
    cin >> size >> size;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    cout << getCount(numbers,size,sum) << endl;
    return 0;
}