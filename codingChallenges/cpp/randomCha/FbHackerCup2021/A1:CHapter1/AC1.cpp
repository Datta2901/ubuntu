#include<bits/stdc++.h>
using namespace std;

int FindMax(map<char,int> a){
    int max = INT_MIN;
    for(auto i : a){
        if(max < i.second){
            max = i.second;
        }
    }
    return max;
}

void print(int c,int answer){
    cout << "Case #"<< c << ": " << answer << endl;
}

int main(){
    // freopen("InputA.txt","r",stdin);
    // freopen("output.txt","a",stdout);
    int t;
    cin >> t;
    int c = 1;
    while(c <= t){
        string s;
        cin >> s;
        // cout << s.size() << endl;
        if(s.size() == 1){
            print(c,0);
            c++;
            continue;
        }
        int Vcount = 0,Ccount = 0,Vanswer = 0,Canswer = 0;
        map<char,int>Vowel,Con;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                Vowel[s[i]]++;
                Vcount++;
            }else{
                Con[s[i]]++;
                Ccount++;
            }
        }   

        Vanswer += 2 * abs(Vcount - FindMax(Vowel)) + Ccount; 
        Canswer += 2 * abs(Ccount - FindMax(Con)) + Vcount;
        int minimum = min(Vanswer,Canswer);
        print(c,minimum); 
        c++;
    }
    return 0;
}