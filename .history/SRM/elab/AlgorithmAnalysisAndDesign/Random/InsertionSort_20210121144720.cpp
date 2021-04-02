#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> numbers){
    for (int i = 1; i < numbers.size(); i++) {  
        int value = numbers[i];  
        int j = i - 1;  
        while (j >= 0 && numbers[j] > value) {  
            numbers[j + 1] = numbers[j];  
            j = j - 1;  
        }  
        numbers[j + 1] = value;  
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

// Algorithm:
// To sort an array of size n in ascending order:
// 1: Iterate from starting to end over the vector.
// 2: Compare the current element (value) to its predecessor.
// 3: If the value element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
// Do it for all the elements size
//Then we will get sorted vector after doing the above 