#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    srand(time(NULL)); 
    for(int i = 0; i < size; i++){
        cout << rand() % size + 1 << endl;
    }
    return 0;
}