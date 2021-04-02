#include <iostream>
using namespace std;

class tollbooth{
	public:
  		double tollCollected;
  		int carsPassed;
  		tollbooth(){
        	 carsPassed = 0;
          	 tollCollected = 0;
        }
  		void payingcar(constant price){
            carsPassed++;
          	tollCollected += price;
        }
  		void nonpayingcar(){
        	carsPassed++;
        }
  		void display(){
        	cout << "Total number of cars passed = " << carsPassed << endl;
          	cout << "Total amount collected = " << tollCollected << endl;
        }	
};

int main() {
	tollbooth obj;
  	int t;
  	string number;
  	double price;
  	cin >> t;
  	
  	for(int i = 0; i < t; i++){
    	cin >> number >> price;
      	if(price != 0){
      		obj.payingcar(price);
        }else{
        	obj.nonpayingcar();
        }	
    }
  	obj.display();
	return 0;
}