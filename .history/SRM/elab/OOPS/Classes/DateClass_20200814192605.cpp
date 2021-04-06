#include <iostream>
using namespace std;

class catanddog{
	public:
  		int c,d,l,t;
  		void count(){
        	int t;
          	cin >> t;
          	while(t--){
            	cin >> c >> d >> l;
              	long long  int answer = l - 4 * d;
              	if(answer < 0 || answer > 4 * c || answer %  4 != 0){
                	cout << "no" << endl;
                }else{
                	cout << "yes" << endl;
                }
            }
        }
}obj;

int main() {
	obj.count();
	return 0;
}