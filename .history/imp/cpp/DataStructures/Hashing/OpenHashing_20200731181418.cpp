//open hashing is one of the collision resolution techinque.
#include<bits/stdc++.h>
using namespace std;

int hashFunc(char c){
    return (c -'a');
}

vector<string> hashTable[20];
int hashTablesize = 20;

void insert(string s){
    int index = 0;
    for(char c : s){
         index = hashFunc(s);
    } 
    
}

int main(){

    return 0;
}