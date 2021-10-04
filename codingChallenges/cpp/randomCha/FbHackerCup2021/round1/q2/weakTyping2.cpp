#include<bits/stdc++.h>
using namespace std;

void print(int c,int answer){
    cout << "Case #"<< c << ": " << answer << endl;
}


int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","a",stdout);
    int t;
    cin >> t;
    int c = 1;
    while(c <= t){
        int size;
        string s;
        cin >> size >> s;
        int Index = 0;
        char prev = s[0];
        vector<long int>answer(s.size());
        answer[0] = 0;
        for(int i = 1; i < s.size(); i++){
            answer[i] = answer[i - 1];
            if(s[i] == 'X' && ((s[i - 1] == 'O' || s[i - 1] == 'F') && prev == 'O')){
                answer[i] = answer[i - 1] + Index + 1;
            }
            if(s[i] == 'O' && ((s[i - 1] == 'X' || s[i - 1] == 'F') && prev == 'X')){
                answer[i] = answer[i - 1] + Index + 1;
            }
            if(s[i] == 'F'){
                continue;
            }else{
                prev = s[i];
                Index = i;
            }      
        }
        long int sum = 0;
        for(auto i : answer){
            sum = (sum + i) % 1000000007;
        }
        print(c,int(sum));
        c++;
    }
    return 0;
}