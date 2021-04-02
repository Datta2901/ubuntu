#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> numbers){
    for (int i = 1; i < numbers.size(); i++) {  
        int key = numbers[i];  
        int j = i - 1;  
        while (j >= 0 && numbers[j] > key) {  
            numbers[j + 1] = numbers[j];  
            j = j - 1;  
        }  
        numbers[j + 1] = key;  
    }  
    return numbers;
}

int main(){
    int size;
    cin >> size;
    vector<int> numbers;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    numbers = insertionSort(numbers);
    cout << "Elements after sorted ";
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }

    return 0;
}
