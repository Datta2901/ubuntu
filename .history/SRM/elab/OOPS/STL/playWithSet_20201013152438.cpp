#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    set<int>s;
    int size;
    cin >> size;
    int a = size;
    for(int i = 0; i < size; i++){
        int b;
        cin >> b;
        s.insert(b);
    }
    int c;
    cin >> c;
        if(s.find(c) != s.end()){
            cout << "Yes\n";
        }else{
                cout << "No\n";
        }
        }
    }
    return 0;
}

for(it = s1.begin(); it != s1.end(); it++){
    cout << *it << " "; 
}