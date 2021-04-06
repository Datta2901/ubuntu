#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define testcase() int t; cin >> t; while(t--)
int main(){
     testcase(){
        int size;
        cin >> size;
        vector<int> velocity,infected;
        velocity.push_back(0);
        for(int i = 1; i  <= size; i++){
            int a;
            cin >> a;
            velocity.push_back(a);
        }
        int count;
        for(int i = 0; i < size; i++){
            count = 0;
            for(int j = 0; j < size; j++){
                if(velocity[i] > velocity[j]){
                    count++;
                }
            }
        }

    }
    return 0;
}

1
