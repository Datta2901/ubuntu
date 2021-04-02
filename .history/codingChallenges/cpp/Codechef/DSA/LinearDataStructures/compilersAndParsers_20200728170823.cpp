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
		int longest_index = 0;
		stack<char> tag;
		bool flag;
		for(int i = 0; i < str.size();i++){
			if(str[i] == '<' ){
				tag.push(str[i]);
				flag = ;
			}else{
				tag.pop();
				if(tag.empty()){
					longest_index = i;
				}
			}
		}
		cout << longest_index + 1 << endl;
	}
return 0;
}	
