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
    int c;
    cin >> c;
    numbers.erase(numbers.begin()+c - 1);
    int s,e;
    cin >> s >> e;
    numbers.erase(numbers.begin() + s - 1,numbers.begin() + e);

    cout << numbers.size() << endl;
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
}