#include<bits/stdc++.h>
using namespace std;

void printString(string answer){
    for(int i = 0; i < answer.size(); i++){
        cout << answer[i];
    }
    cout << endl;
}

void  requiredString(int size){
    string a,b;
    for(int i = 0; i < size; i++){
        a[i] = 'a';
        b[i] = 'a';
    }
    b[b.size()] += 'b';
    printString(a);
    printString(b);
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
            if(a == 0){
                // cout << 'a' << endl;
                // cout << 'b' << endl;
                continue;
            }
            requiredString(a);   
        }
    }
    

    return 0;
}