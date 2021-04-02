/* to use this method the data must have unique elements
table size must be greater than or euql to hash table size*/

#include<bits/stdc++.h>
using namespace std;

string hashTable[21];
int hashTableSize = 21;

int hashFunc(string s){
   return  (s.size()) % hashTablesize;
}


void insert(string s){
    int index =hashFunc(s) ;
    while(hashTable[index] != ""){
        index = (index + 1 ) % hashTableSize
    }
}


int main(){



    return 0;
}