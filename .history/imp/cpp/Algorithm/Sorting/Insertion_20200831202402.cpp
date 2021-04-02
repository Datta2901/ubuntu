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

    for(int i = 1; i < size; i++){
        int j = i - 1;
      
        while(j >= 0 && arr[j] > value){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = value;
    }

    for(int i = 0; i < size; i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;

    return 0;
}