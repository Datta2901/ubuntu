#include<bits/stdc++.h>
using namespace std;

vector<int> BubbleSort(vector<int> numbers){
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
    numbers = Bubble(numbers);
    cout << "Elements after sorted ";
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }

    return 0;
}
