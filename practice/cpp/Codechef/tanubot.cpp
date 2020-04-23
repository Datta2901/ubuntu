#include <iostream>
#include<bits/stdc++.h>
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
using namespace std;

int main(){
    EXECUTE_FASTER ;
	int t,c;
    bool flag = false;
	cin >> t;
	while(t--){
		string b;
		cin >> c >> b;
		for(int i = 0; i < c; i++){
			if(b[i]=='Y'){
				flag =true;
				cout << "NOT INDIAN" << endl;
				break;
			}
			else if(b[i]=='I'){
                flag = true;
				cout << "INDIAN" << endl;
				break;
			}
		}
		if(flag){
			cout << "NOT SURE" << endl;
		}
	}
}