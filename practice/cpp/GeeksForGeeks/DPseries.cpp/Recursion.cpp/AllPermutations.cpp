// Total number of permutations possible for a string of length n is n!
#include<bits/stdc++.h>
using namespace std;
int count1 = 0;
void permutate(string s,int index = 0){
    if(index == s.size() - 1){
        cout << s << endl;
        count1 += 1;
        return;
    }
    for(int j = index; j < s.size(); j++){
        swap(s[j],s[index]);
        permutate(s,index + 1);
        swap(s[index],s[j]);
    }
}

int main(){
    string s;
    cin >> s;
    permutate(s);
    cout << "Total Number of permutations are : " << count1 << endl;
    return 0;
}