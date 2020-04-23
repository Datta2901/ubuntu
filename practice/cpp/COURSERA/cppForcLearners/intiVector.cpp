#include <iostream>
#include <vector>
#include <iterator>
using namespace std ;
int main(){
    // vector can be initialise in following ways
    int size,value ;
    cin >> size ; 
   vector<int> data ;//creates a empty vector
   vector<int> data(size) ;//creates  vectors of given size
   vector<int> data(size,value);//creates vectors of given size and they are initiated with the given value
   //if you want to know the size of the vector 
   cout << data.size();
   //if you want to resize the size 
   //v.resize(int resize = 10)

   for(vector<int> ::iterator i = data.begin(); i != data.end(); i++){         //instead of  "vector<int> data" = auto 
       cin >> *i;
       cout << *i; 
       //another type of syntax for for loop
   }
       for(int d : data){

       }
    // or
        for(auto & d : data){
            d=d+2 ;
        }

   cout<<size ;


    return 0 ;
}

