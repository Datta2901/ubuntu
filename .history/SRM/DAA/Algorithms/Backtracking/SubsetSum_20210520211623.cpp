#include<bits/stdc++.h>
using namespace std;

void PrintSubSet(vector<int> result){
    cout << result.size() << " -----> " << endl;
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << ''
}

int main(){
    int size;
    cin >> size;
    vector<int>numbers;
    for(int i = 9; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }



    return 0;
}