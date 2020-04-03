#include<iostream>
struct slistelem
{
    char data ;
    slistelem* next ;
};

class slist
{
    public :

    slist():h(0){}
    ~slist() {release();} //

    private:
    slistelem* h;  //list head
}