#include<bits/stdc++.h>
using namespace std;

const long int size = 1e9 + 2;
string HashTable[size];

void insert(long int index,string s){
    index = index % size;
    HashTable[].push_back(s);
}

void Search(long int index){
    cout << HashTable[index] << endl;
}

int main(){
    int number;
    cin >> number;
   
    while(number--){
        long int roll;
        string name;
        insert(roll,name);
    }
    int queries;
    cin >> queries;
    long int roll;
    while(queries--){
        cin >> roll;
        Search(roll);
    }
    return 0;
}