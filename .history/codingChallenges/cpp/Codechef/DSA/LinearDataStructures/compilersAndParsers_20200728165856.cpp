#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
   	string str;
   	cin >> str;
	if(str[0] == '>'){
		cout << 0 << endl;
		continue;
	}
	stack<char> tag;
   	for(int i = 0; i < str.size();i++){
		if(str[i] == '<'){
			tag.insert(str[i]);
		}
   	}
}