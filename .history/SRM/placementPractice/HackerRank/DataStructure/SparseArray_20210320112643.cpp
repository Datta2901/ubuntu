#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries){
    vector<int> results;
    map<string,int> freq;
    for(auto i : strings){
        freq[i]++;
    }
    for(auto i : queries){
        results.push_back(freq[i]);
    }
    
}

int main(){


    return 0;
}