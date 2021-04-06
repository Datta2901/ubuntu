#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    cout << "Marks of the students: ";
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        if(i != size - 1){
            cout << a << " ";
        }else{
            cout << a << endl;
        } 
    }
