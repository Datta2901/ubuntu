
#include<bits/stdc++.h>
using namespace std;


bool comparator(int a,int b)
{
    string aa = to_string(a);
    string bb = to_string(b);
    return aa+bb > bb+aa;
}

int titleToNumber(string s)
{
    int result = 0;
    for (const auto& c : s)
    {
        result *= 26;
        result += c  - 'A' + 1;
    }
    return result;
}

string solve(int n,vector<string> A){
    int ct = 0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
            ct++;
    }
    if(ct==n)
        return "0";
    sort(A.begin(),A.end(),comparator);
    string s;
    for(int i=0;i<A.size();i++)
        s +=(to_string(A[i]));
    return s;
}

int main(){
    int size;
    cin >> size;
    vector<int>num;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        num.push_back(a);
    }
    cout << solve(size,num) << endl;
}