//open hashing is one of the collision resolution techinque.
#include<bits/stdc++.h>
using namespace std;

int hashFunc(string s){
   return  rand() % 20;
}

vector<string> hashTable[20];
int hashTablesize = 20;

void insert(string s){
    int index = hashFunc(s);
    hashTable[index]
}

int main(){

    return 0;
}