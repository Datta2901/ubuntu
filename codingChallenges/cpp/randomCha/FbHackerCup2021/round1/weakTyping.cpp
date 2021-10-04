#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void print(int c,int answer){
    cout << "Case #"<< c << ": " << answer << endl;
}


int main(){
    freopen("InputA.txt","r",stdin);
    freopen("output.txt","a",stdout);
    int t;
    cin >> t;
    int c = 1;
    while(c <= t){
        int size;
        string s;
        cin >> size >> s;
        bool left = false,right = false;
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'O'){
                right = true;
                if(left  == true && right == true){
                    count++;
                }
                left = false;
            }if(s[i] == 'X'){
                left = true;
                if(left  == true && right == true){
                    count++;
                }
                right = false;
            }
        }
        print(c,count);
        c++;
    }

    return 0;
}