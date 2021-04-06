#include<iostream>
using namespace std;
class Building{
    public:
        Building(){
            cout << "b ";
        }
        Building(string name){
            new (this) Building();
            cout << ("bn " + name);
        }
};
class House : public Building{
    public:
        House(){
            cout << "h ";
        }
        Huse()
}
int main(){
    return 0;
}