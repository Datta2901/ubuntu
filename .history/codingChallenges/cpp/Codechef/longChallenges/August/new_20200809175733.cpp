//  https://www.codechef.com/AUG20B/problems/SKMP,
#include<bits/stdc++.h>
#define testcase() int t; cin >> t; while(t--)

string common(string str,string patt){
unordered_map<char,int> freq;
for(int i = 0; i < patt.size(); i++){
    freq[patt[i]]++;
}

for(int i = 0; i < str.size(); i++){
    if(freq[str[i]] > 0){
        freq[str[i]] -= 1;
        str[i] = '0';
    }
}
return str;
}

int main(){
testcase(){
    string str,patt,requiredAnswer,anotherString;
    cin >> str >> patt;
    str = common(str,patt);
    str += patt[0];
    sort(str.begin(),str.end()); 
    // cout << str << endl;
    int index = str.find(patt[0]);
    int index2 = str.find_last_of(patt[0]);

    for(int i = 0; i < index2 ; i++){
        if(str[i] != '0'){
            anotherString += str[i];
        }
    }
    anotherString += patt;
    for(int i = index2 + 1; i < str.size(); i++){
        if(str[i] != '0'){
            anotherString += str[i];
        } 
    }
    for(int i = 0; i < index ; i++){
        if(str[i] != '0'){
            requiredAnswer += str[i];
        }
    }
    requiredAnswer += patt;
    for(int i = index + 1; i < str.size(); i++){
        if(str[i] != '0'){
            requiredAnswer += str[i];
        } 
    }
    vector<string>answer;
    answer.pb(requiredAnswer);
    answer.pb(anotherString);
    sort(answer.begin(),answer.end());
    cout << answer[0] << endl;
}
return 0;
}