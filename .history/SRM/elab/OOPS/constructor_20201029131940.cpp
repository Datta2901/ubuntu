#include<iostream>
using namespace std;
class Building{
    public:
        Building(){
            cout << "b ";
        }
        Building(string name){
            new (this) Building();
            cout << "bn "
        }
}
int main(){
    return 0;
}