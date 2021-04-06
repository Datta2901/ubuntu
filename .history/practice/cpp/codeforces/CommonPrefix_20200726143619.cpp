#include<bits/stdc++.h>
using namespace std;

printString()


void  requiredString(int size){
    string a,b;
    for(int i = 0; i < size; i++){
        a[i] += 'a';
        b[i] += 'a';
    }
    b[b.size()] = 'b';
    printString();
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        while(size--){
            int a;
            cin >> a;
            requiredString(a);
           
        }
    }
    

    return 0;
}