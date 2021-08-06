#include<bits/stdc++.h>
using namespace std;

int main(){

    string word,an = "doselect";
    cin >> word;

    map<char,int> fre;
    // cout << word;
    for(auto ch : word){
        fre[ch]++;
    }

    int count = 0; 
    for(auto ch : an){
        if(fre[ch] == 0){
            count++;
        }else{
            fre[ch]--;
        }
    }
    if(count <= 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl; 
    }
    return 0;
}


string solve(string word){
    string an = "doselect";
    if(an.size() < 8){
        return "NO";
    }
    map<char,int> fre;
    // cout << word;
    for(auto ch : word){
        fre[ch]++;
    }
    int count = 0; 
    for(auto ch : an){
        if(fre[ch] == 0){
            count++;
        }else{
            fre[ch]--;
        }
    }
    if(count <= 1){
        return "YES";
    }
    return "NO";
}