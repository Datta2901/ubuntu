#include<bits/stdc++.h>
using namespace std;

vector<int> BubbleSort(vector<int> numbers){
    for (int i = 0; i < numbers.size(); i++) {  
        for(int j = 0; j < numbers.size() - i - 1; j++){
            if(numbers[j] > numbers[j + 1]){
                swap(numbers[j + 1],numbers[j]);
            }
        }
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
    numbers = BubbleSort(numbers);
    cout << "Elements after sorted ";
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }

    return 0;
}

//Time complexity of the code is O(n2)

// Algorithm:
//  It will compare every two elements in the swap that by completing
// 
// 
// 
// 