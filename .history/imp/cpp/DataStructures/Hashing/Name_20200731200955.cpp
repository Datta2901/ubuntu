#include<bits/stdc++.h>
using namespace std;

void insert(long int index,string s,long int size,vector<string> &HashTable[size],){
    index = index % size;
    HashTable[index].push_back(s);
}

int main(){
    int number;
    cin >> number;
    long int  size = 1e9 + 2; 
    vector<string> HashTable[size];
    while(number--){
        long int roll;
        string name;
        insert(roll,name,HashTable,size);
    }
    int queries;
    cin >> queries;
    long int roll;
    while(queries--){
        cin >> roll;
    }
    return 0;
}