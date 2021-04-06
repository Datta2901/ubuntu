#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int getMinMax(vector<int>numbers,int size){

}

int main(){ 
    int size;
    cin >> size;
    vector<int>numbers;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    cout << getMinMax(numbers,size,0) << endl;
    return 0;
}