#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> velocity,answer;
    for(int i = 0; i  < size; i++){
        int a;
        velocity.push_back(a);
    }
     
    int count;
    for(int i = 0; i < size; i++){
        for(int j = 1; j < size; j++){
            count = 0;
            
            for(int k = 1; k < size; k++){
                if(k == j){
                    count++;
                }
            }
        }
    }  

    return 0;
}