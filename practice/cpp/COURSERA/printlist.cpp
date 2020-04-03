#include<iostream>
using namespace std ;
class list
{
    public:
    list():head(0),cursor(0){}      //constructor init
    void prepend(int n) ;
    int get_element()
    {
        return cursor->d ;
    }
    void advance()
    {
        cursor =cursor.next ;
    }
    void print();
    // new list_element(n,head) ;
    private:
          list_element* head ;
          list_elment* cursor ;

} ;

void list :: prepend(int n)
{
    if(head == 0)       //in case of empty list
    {
        cursor =head = new list_element(n,head) ;
    }
    else                //to add a element in front 
    {
        head = new list_element(n,head) ;

    }
}


void list :: print()
{
    list_element* h =head ;
    while(h!=0)
    {
        cout<< h->d <<" ,";
        h=h->next;

    }

}

int main()
{
    list a,b ;
    a.prepend(9) ;
    a.prepend(8) ;
    cout<<"list a"<<endl ;
    a.print() ;
    for(int i=0;i<40;i++)
    {
        b.prepend(i*i) ;
        cout<<"list b"<<endl ;
        b.print() ;
    }
    return 0 ;
}