#include<bits/stdc++.h>
using namespace std;

int frequency[26];
int hashFunc(char c){
    return (c -'a');
}

void countFrequency(string str){
    for(int i = 0; i < str.len(); i++){
        int index = hashFunc(str[i]);
        frequency[index]++;
    } 
}

void printFrequency(){
    for(int i = 0; i <)
}

int main(){
    string str;
    cin >> str;
    return 0;
}