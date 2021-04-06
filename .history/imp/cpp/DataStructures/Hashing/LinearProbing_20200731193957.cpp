/* to use this method the data must have unique elements
table size must be greater than or euql to hash table size*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string hashTable[21];
int hashTableSize = 21;

int hashFunc(string s){
   return  (s.size()) % hashTableSize;
}


void insert(string s){
    int index =hashFunc(s) ;
    while(hashTable[index] != ""){
        index = (index + 1 ) % hashTableSize;
    }
    hashTable[index] = s;
}

void Search(string s){
    int index = hashFunc(s);
    while(hashTable[index] != s && hashTable[index] != ""){
        index = (index + 1)  % hashTableSize;
    }
    if(hashTable[index] == s){
        cout << "The given string Found at index " << index << endl;
        return;
    }
    cout << "The strind not found " << endl;
}


int main(){
    cout << "Enter the number of operations\n";
    int t;
    cin >> t;
    while(t--){
        cout << "Enter the operation and string\n";
        string s;
        char c;
        cin >> c >> s;
        if(c == 'i'){
            insert(s);
        }else{
            Search(s);
        }
    }


    return 0;
}