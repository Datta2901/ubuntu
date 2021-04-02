#include<iostream>
using namespace std;
 
class Marks{
   private:
      int m1;            
      int m2;           
   
   public:
   // Parametrised constructor
    Marks(int i, int j) {
        m1 = i;
        m2 = j;
    }
   // Overloading of Assignment Operator
    void operator=(const Marks &M ) { 
        m1 = M.m1;
        m2 = M.m2;
    }
    
   void Display() {
      cout << "Marks in 1st Subject:" << m1 << endl;
      cout << "Marks in 2nd Subject:" << m2;
    }   
};

int main(){
  // Make two objects of class Marks
   Marks Mark1(45, 89);
   Marks Mark2(36, 59); 
   cout << " Marks of first student : "; 
   Mark1.Display();
   cout <<endl <<  " Marks of Second student :"; 
   Mark2.Display();
   // use assignment operator
   Mark1 = Mark2;
   cout <<endl <<  " Mark in 1st Subject :"; 
   Mark1.Display();
   return 0;
}