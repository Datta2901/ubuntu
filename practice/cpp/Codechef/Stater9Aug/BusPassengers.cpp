#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int size,capacity,queries,answerSize = 0;
        bool answer = true;
        cin >> size >> capacity >> queries;
        map<int,int>arr;
        while(queries > 0){
            char ch;
            int pl;
            cin >> ch >> pl;
            if(ch == '+'){
                arr[pl] = 1;
                answerSize += 1;
                if(answerSize > capacity){
                    answer = false;
                }
            }else{
                if(arr[pl] == 0){
                    answer = false;
                }
                answerSize -= 1;
                if(answerSize < 0){
                    answerSize = 0;
                }
            }
            queries--;
        }
        if(answer){
            cout << "Consistent" << endl;
        }else{
            cout << "Inconsistent" << endl;
        }
    }
    return 0;
}