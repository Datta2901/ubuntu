#include <iostream>

using namespace std;

class RectangleArea{
  public:
      int l,b; 
      void read_input(){
          cin >> l >> b;
      }
      void display(){
          cout << l*b << endl; 
      }
     class Rectangle{
        public:
        void display(){
            cout << l << " " << b << endl;
        }
    };

};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}