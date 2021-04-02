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

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j],&arr[j + 1]);
            }
        }
    }

    for(int i = 0; i < size; i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;

    return 0;
}