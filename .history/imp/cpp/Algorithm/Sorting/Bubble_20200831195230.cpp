#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int *
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j],&arr[j + 1]);
            }
        }
    }

    return 0;
}