#include<iostream>
#include<cmath>
using namespace std;


class duo{

public:    
    duo():first(0.0),second(0.0){};
    void set_first(double d){
       first = d;
    }
    void set_second(double d){
        second = d;
    }
    double get_first(){
        return first;
    };
    double get_second(){
        return second;
    }
   protected:
    double first,second;
};



class  point : public duo{
    public:
        double length(){
            return (sqrt(first*first + second*second));
        }

};

int main(){
    
    point q ;
    cout << "Enter the point\n";
    double a,b;
    cin >> a >> b;
    q.set_first(a),q.set_second(b);
    cout << "x coordinate is "<<q.get_first() <<"y coordinate is"<< q.get_second() << endl;
    cout << "Length of the point " <<"from (0,0)"<<q.length() <<endl;

}