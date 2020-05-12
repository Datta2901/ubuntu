#include <iostream>
#include <bits/stdc++.h>
#define loop(n) for(int i = 0; i < n; i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pb push_back
#define endl '\n'
using namespace std;
int main(){
    EXECUTE_FASTER;
    string word[5] = {"Thontepu","naga","datta","madhu","kiran"};
    string* where;
    where = find(word,word+5,"naga");
    cout << *where << endl;
    cout<< *++where <<endl;
    sort(word,word+5);
    where = find(word,word+5,"datta");
    cout << *++where <<endl;

    return 0;
}    