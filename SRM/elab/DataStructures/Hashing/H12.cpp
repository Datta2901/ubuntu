#include<iostream>
#include<map>
#include<cstring>
using namespace std;
bool check(map<int,int> M,int k){
for(auto a:M){
if((a.second%k)!=0)
return false;
}
return true;
}
int main(){
int T;
cin>>T;
while(T--){
int N,K;
cin>>N>>K;
map<int,int> M;
for(int i=1;i<=N;i++){
string str;
cin>>str;
M.insert(make_pair(i,str.length()));
}
map<int,int> M2;
for(auto a:M){
if(M2.count(a.second))
M2[a.second]++;
else
M2.insert(make_pair(a.second,1));
}
if(check(M2,K))
cout<<"Possible"<<endl;
else
cout<<"Not possible"<<endl;
}
return 0;
}