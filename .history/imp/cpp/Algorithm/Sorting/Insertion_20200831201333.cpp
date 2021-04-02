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
    int min_index;
    for(int i = 0; i < size; i++){
        min_index = i;
        for(int j = 0; j < size; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        swap(&arr[min_index],&arr[i]);
    }

    for(int i = 0; i < size; i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;

    return 0;
}