//open hashing is one of the collision resolution techinque.
#include<bits/stdc++.h>
using namespace std;

int hashFunc(char c){
    
}

vector<string> hashTable[20];
int hashTablesize = 20;

void insert(string s){
    int index = 0;
    for(char c : s){
        index += hashFunc(c);
    } 
    
}

int main(){

    return 0;
}