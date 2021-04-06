#include <iostream>
using namespace std;

class Date{
  	public:
  	int day,month,year;
  	Date(){
    	cin >> day >> month >> year;
    }
  	void getDate(){
    	string arr[13] = {"a","January","February","March","April","May","June","July","August","September","October","November","December"};
      	cout << arr[month] << " " << day << " " << year << endl;
    }
};

int main() {
	Date day;
  	day.getDate();
	return 0;
}