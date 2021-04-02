#include<bits/stdc++.h>
using namespace std;

void solve(){
	int size;
	cin >> size;
	int max = INT_MIN,min = INT_MAX,s = 0,t = 0;
	vector<int> number;
	for(int i = 0; i  < size; i++){
		int a;
		cin >> a;
		number.push_back(a);
		if(min > a){
			min = a;
			s = i;
		}if(max < a){
			max = a;
			t = i;
		}
	}

	if(s < t){
	        cout << min << " " << max << endl;
	    }
	    else{
	        cout << max << " " << min<<endl;
	    }
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();	
	}
	return 0;
}
