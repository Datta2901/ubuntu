///open hashing is one of the collision resolution techinque.
//Seperate chaining
#include<bits/stdc++.h>
using namespace std;


vector<string> hashTable[20];
int hashTablesize = 20;

int hashFunc(string s){
   return  (s.size()) % hashTablesize;
}

void insert(string s){
    int index = hashFunc(s);
    hashTable[index].push_back(s);
}

void Search(string s){
    int index = hashFunc(s);
    for(int i = 0; i < hashTable[index].size(); i++){
        if(hashTable[index][i] == s){
            cout << s << " String is found at postion " << index << " , " << i << endl;
            return ;
        }
    }
    cout << s << " Siven string is not found in the lookup table " << endl;
}

int main(){
    cout << "Enter the number of operations\n";
    int t;
    cin >> t;
    while(t--){
        cout << "Enter the  and operationstring\n";
        string str;
        char q;
        cin >> str >> q;
        if(q == 'i'){
            insert(str);
        }else{
            Search(str);
        }
    }
    return 0;
}