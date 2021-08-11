#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Result{
    Result(): output1(){};
    int output1[100];
};

Result altTab(int input1,int input2,int input3[]){
    Result obj;
    obj.output1[0] = input3[input2 - 1];
    int i = 1;
    for(int j = 0; j < input1; j++){
        if(j == input2 - 1){
            continue;
        }
        obj.output1[i++] = input3[j];
    }
    return obj;
}

int main(){
    int n,m,a[100];
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    Result obj = altTab(n,m,a);
    for(int i = 0; i < n; i++){
        cout << obj.output1[i] << " ";
    }
    return 0;
}