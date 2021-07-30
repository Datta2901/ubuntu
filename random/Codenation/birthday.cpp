#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    vector<int>people,dup;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        people.push_back(a);
        dup.push_back(a);
    }

    sort(people.begin(),people.end());
    map<int,int> fre;
    for (int i = size - 1; i >= 0; i--)
    {   
        if(fre[people[i]] == 0){
            for(int j = 0; j < i; j++){
                if(people[i] % people[j] == 0 || people[j] % people[i] == 0){
                    fre[people[i]]++;
                    fre[people[j]]++;
                }
            }
        }
    
    }
    for(int i = 0; i < size; i++){
        cout << fre[dup[i]] << " ";
    }

    return 0;
}