#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;

    for(int i = 0; i < size; i++){
         srand(time(NULL)); 
        cout << rand() % size + 1 << endl;
    }
    return 0;
}