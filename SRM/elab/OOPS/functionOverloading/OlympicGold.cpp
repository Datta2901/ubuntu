#include <iostream>
using namespace std;

class Olympic{
  public:
	int distance(int D1,int D2){
    	return D1+D2;
    }
  	int distance(int D3,int D4,int D5){
    	return D3 + D4 + D5;
    }
};

int main() {
  	Olympic ob;
  	int a,b,c;
  	cin >> a >> b;
  	cout << ob.distance(a,b) << " meters" << endl;
  	cin >> a >> b >> c;
  	cout << ob.distance(a,b,c) << " meters" << endl;
	return 0;
}