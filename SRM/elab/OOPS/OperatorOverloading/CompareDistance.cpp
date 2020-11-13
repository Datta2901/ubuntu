#include <iostream>
using namespace std;

class Distance{
    public:
	int feet1,inches1,feet2,inches2;
  	Distance(int a,int b,int c,int d){
		feet1 = a;
      	inches1 = b;
        feet2 = c;
        inches2 = d;
    }

  	void displayDistance(){
    	;
    }
  
    void operator <(int a){
    	 if(feet1>feet2)
      		cout<<"First One is Greater";
    	else if(feet1==feet2 && inches1>inches2)
      		cout<<"First One is Greater";
    	else if(feet1 < feet2)
      		cout<<"Second One is Greater";
   		else if(feet1==feet2 && inches1 < inches2)
      		cout<<"Second One is Greater";
    	else if(feet1==feet2 && inches1 == inches2)
     	 cout<<"Both are equal";
    }
};

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  Distance obj(a,b,c,d);
  obj.displayDistance();
  obj.operator <(a);
	return 0;
}