#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// doesn't contribute to answer
// Even + even = even
// odd + odd = even 


// so we have to place odd numbers in even
// even numbers in odd
// Even + odd = odd


int main(){
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        int countOdd = 0;
        int a;
        for(int i = 0; i < size; i++){
            cin >> a;
            if(a % 2 != 0){
                countOdd++;
            }
        }

        int oddI = (size + 1)/ 2;
        int evenI = (size) / 2;
        // cout << oddI + evenI << endl;
        if(oddI > size - countOdd){
            oddI = size - countOdd;
        }if(evenI > countOdd){
            evenI  = countOdd;
        }
        cout << oddI + evenI << endl;
     }

    return 0;
}