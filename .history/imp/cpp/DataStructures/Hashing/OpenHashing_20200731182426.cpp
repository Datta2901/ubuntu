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
    for(int i = 0; i < hashTable[index].size(); i++){
        if(hashTable[index][i] == s){
            cout << s << "String is found at postion " << index << " , " << i << endl;
            return ;
        }
    }
    cout << s << " Siven string is not found in the lookup table " << endl;
}

int main(){
    string str;
    char q;
    cin >> str >> q;
    if(q == 'i'){
        insert(str);
    }

    return 0;
}