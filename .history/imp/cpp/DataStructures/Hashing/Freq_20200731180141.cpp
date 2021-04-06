//Simple hash function to calculate the frequency of every char from a to z
#include<bits/stdc++.h>
using namespace std;

int frequency[26];
int hashFunc(char c){
    return (c -'a');
}

void countFrequency(string str){
    for(int i = 0; i < str.size(); i++){
        int index = hashFunc(str[i]);
        frequency[index]++;
    } 
}

void printFrequency(){
    for(int i = 0; i < 26; i++){
        cout << (char)(i + 'a') << " " << frequency[i] << endl;
    }
}

int main(){
    string str;
    cin >> str;
    countFrequency(str);
    printFrequency();
    return 0;
}