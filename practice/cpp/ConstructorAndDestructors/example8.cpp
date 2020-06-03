// by using the virtual key the ambiguity will not be there  EG: refer example5;
#include<iostream> 
using namespace std;
	class ClassA{ 
			public: 
			int a; 
	}; 

	class ClassB : virtual public ClassA{ 
			public: 
			int b; 
	}; 
	class ClassC : virtual public ClassA{ 
			public: 
			int c; 
	}; 

	class ClassD : public ClassB, public ClassC { 
			public: 
			int d; 
	}; 

	int main() 
	{ 
			ClassD obj; 

			obj.a = 10;	      //Statement 3 
			obj.a = 100;	 //Statement 4 

			obj.b = 20; 
			obj.c = 30; 
			obj.d = 40; 

			cout << "A : " << obj.a << "\n"; 
			cout << "B : " << obj.b << "\n";
			cout << "C : " << obj.c << "\n";
			cout << "D : " << obj.d << "\n";
        return 0;
	} 
