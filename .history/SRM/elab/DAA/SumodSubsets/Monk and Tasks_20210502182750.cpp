#include<bits/stdc++.h>
using namespace std;
 
int countOnes(int num) {
    int cnt=0;
    while(num) {
        num &= num-1;
        cnt++;
    }
    return cnt;
} 
 
int main() 
{
    int t,i,j,temp,k,n;
    cin>>t;
    for(i=0;i<t;i++) {
        cin>>n;
        int vec[n];
        vector<pair<int,int>> mv;
        for(j=0;j<n;j++) {
            cin>>temp;
            vec[j]=temp;
        }
        for(j=0;j<n;j++) {
            k = countOnes(vec[j]);
            mv.push_back(make_pair(k,j));
        }
        sort(mv.begin() , mv.end());
        for(j=0;j<n;j++) {
            cout<<vec[mv[j].second]<<" ";
        }
        cout<<endl;
    }
}

