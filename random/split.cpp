#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int solution(string s){
            int countR = 0,countL = 0;
            int answer = 0;
            for(int i = 0; i < s.size(); i++){
                if(s[i] == 'L'){
                    countL++;
                }if(s[i] == 'R'){
                    countR++;
                }if(countL == countR){
                    answer++;
                    countL = 0;
                    countR = 0;
                }
            }
            return answer;
        }
};

int main(){
    Solution obj;
    string s;
    cin >> s;
    cout << obj.solution(s) << endl;
}