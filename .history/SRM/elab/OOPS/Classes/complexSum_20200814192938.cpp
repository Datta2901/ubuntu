#include <iostream>
using namespace std;

class complex{
  public:
	int r1,r2,i1,i2,an1,an2;
  	complex(){
    	cin >> r1 >> i1 >> r2 >> i2;
      	an1 = 0;
        an2 = 0;
    }
  	void addcomplex(){
    	an1 = r1 + r2;
      	an2 = i1 + i2;
    }
  	void displaycomplex(){
    	cout << r1 << "+" << i1 << "i" << endl;
      	cout << r2 << "+" << i2 << "i" << endl;
      	cout << an1 << "+" << an2 << "i" << endl;
    }
  	
};


int main() {
	complex obj;
  	obj.addcomplex();
  	obj.displaycomplex();
	return 0;
}