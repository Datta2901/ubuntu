#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int element;
    cin >> element;
    for(int i = 0; i < size; i++){
        if(element == arr[i]){
            cout << "Element Found"
        }
    }

    return 0;
}
