#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int value;
    for(int i = 0; i < size; i++){
        value = arr[i];
        int j = i - 1;
        while(j >= 0 )
        arr[j + 1]
    }

    for(int i = 0; i < size; i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;

    return 0;
}