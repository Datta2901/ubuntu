#include<iostream>
using namespace std ;

typedef enum days { Sun,mon,tue,wed,thu,fri,sat}days ;

inline days operator++(days d) 
{
    return static_cast<days>((static_cast<int>(d)+1)%7) ;
    cout<<d ;
}
ostream & operator<<

(ostream & out,const days&d )
{
    switch (d)
    {
        case Sun :
        out<<"sun" ;
        break ;

        case mon :
        out<<"mon";
        break ;

        case tue :
        out<<"tue" ;
        break ;

        case wed :
        out<<"wed" ;
        break ;

        case thu :
        out<<"thu" ;
        break ;

        case fri :
        out<<"fri" ;
        break ;

        case sat :
        out<<"sat" ;
        break ; 
    }
    return out ;
}

int main()
{   char i[3] ;
    days d,e ;
    d=sat ;
    e=++d ;
    
    cout<<d<<"\t"<<e<<endl ;
    return 0 ;
}