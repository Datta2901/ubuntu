#include <iostream>
using namespace std;

class outer{

  public:
  	int x;
  	void get(){
    	cin >> x;
    }
  		
    class inner{
        public :
            void get(){
                cin >> y;
            }
            void sum(){
                  outer a;
                  a.get();
                  cout << a.x + y;
              }
        private :
            int y;

        };
};  

int main(){
  	outer::inner b;
  	b.get();
  	b.sum();
	return 0;
}