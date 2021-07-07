#include<bits/stdc++.h>
using namespace std;

// question :  https://www.geeksforgeeks.org/calculate-xor-1-n/
int computeXOR(){
    // compute xor of 1 to n
    int n;
    cin >> n;
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}

// https://www.geeksforgeeks.org/swap-two-numbers-without-using-temporary-variable/
void swap(){
    // Swap numbers using ^
    int a,b;
    cin >> a >> b;
    a ^= b;
    b ^= a;
    a ^= b;
    cout << a << " " <<  b << endl;
}

//flip all bits
void flipAllBits(){
    int a;
    cin >> a;
    cout << ~(a);
}

// count the number of 1's
int NumberOfOnes(){
    int n;
    cin >> n;
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

bool isPowerOf2(){
    int n;
    cin >> n;
    return (n && !(n & (n - 1)));
}

void GenerateAllSubsets(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < (1 << size); i++){
        for(int j = 0; j < size; j++){
            if(i == 0 && j == 0){
                cout << "{}" << endl;
            }
            if(i & (1 << j)){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

// Write a program to find a unique number in an array where all numbers except
// one, are present twice.
void unique(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int answer = 0;
    for (int i = 0; i < size; i++){
        answer ^= arr[i];  
    }
    cout << answer << endl;
}

// problem : https://www.geeksforgeeks.org/find-two-non-repeating-elements-in-an-array-of-repeating-elements/
// Find the two non-repeating elements in an array of repeating elements Unique Numbers
void unique2(){
    int size;
    cin >> size;
    int arr[size];
    int num1 = 0,num2 = 0,Xor = 0;
    int set_bit;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        Xor ^= arr[i];
    }
    set_bit = Xor & ~(Xor - 1);
    for(int i = 0; i < size; i++){
        if(arr[i] & set_bit){
            num1 ^= arr[i];  
        }else{
            num2 ^= arr[i]; 
        }
    }
    cout << num1 << " " << num2 << endl;
}

int main(){
    // cout << computeXOR() << endl;
    // swap();
    // flipAllBits();
    // cout << NumberOfOnes() << endl;
    // cout << isPowerOf2() << endl;
    GenerateAllSubsets();
    // unique();
    // unique2();
 return 0;
}


// {}
// 1 
// 2 
// 1 2 
// 3 
// 1 3 
// 2 3 
// 1 2 3 
// 4 
// 1 4 
// 2 4 
// 1 2 4 
// 3 4 
// 1 3 4 
// 2 3 4 
// 1 2 3 4

