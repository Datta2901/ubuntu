#include<bits/stdc++.h>
using namespace std;

void solve(){
	int size;
	cin >> size;
	int max = INT_MIN,min = INT_MAX;
	vector<int> number;
	for(int i = 0; i  < size; i++){
		int a;
		cin >> a;
		number.push_back(a);
		if(min > a){
			min = a;
		}if(max < a){
			max = a;
		}
	}

	if(s<t){
	        cout<<mn<<" "<<mx<<endl;
	    }
	    else{
	        cout<<max<<" "<<mn<<endl;
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
