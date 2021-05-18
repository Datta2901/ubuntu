#include <iostream>
using namespace std;
int main() {
	int t;
  	cin >> t;
  	while(t--){
    	string a,b;
      	cin >> a >> b;
      	int count = 0;
      	for(int i = 0; i < min(a.size(),b.size()); i++){
        	if(a[i] == b[i]){
            	count++;
            }
        }
      	cout << count << endl;
      
    }
	return 0;
}