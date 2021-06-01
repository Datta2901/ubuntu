#include<bits/stdc++.h>
using namespace std;
vector<vectoint> result
void PrintSubSet(){
    cout << result.size() << " -----> " << endl;
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
}


void GetSubsets(vector<int>numbers)

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