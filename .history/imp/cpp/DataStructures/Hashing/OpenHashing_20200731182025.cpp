//open hashing is one of the collision resolution techinque.
#include<bits/stdc++.h>
using namespace std;

int hashFunc(string s){
   return  (s.size());
}

vector<string> hashTable[20];
int hashTablesize = 20;

void insert(string s){
    int index = hashFunc(s);
    hashTable[index].push_back(s);
}

void Search(string s){
    int index = hashFunc(s);
    for(int i = 0; i < )
}

int main(){

    return 0;
}