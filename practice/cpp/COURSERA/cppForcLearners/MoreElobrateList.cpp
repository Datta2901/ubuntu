#include<iostream>
using namespace std ;
template<class T> 
class list
{
    public:
        //different types of constructors
        list():head(0),cursor(0){}
        list(const int* arr,int n) ;
        list(const list& lst) ;

    ~list() ; //to delete 
    private:
        list_element* head ;
        list_elment* cursor ;
};
int main()
{

}