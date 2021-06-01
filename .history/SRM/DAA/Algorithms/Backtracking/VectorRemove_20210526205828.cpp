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
    numbers.remove(numbers.begin()+c);
    int s,e;
    cin >> s >> e;
    numbers.remove(numbers.begin() + s,numbers.en)
}