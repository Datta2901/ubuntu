#include<iostream>
 using namespace std ;
union numericUnion
{
     int intValue;
     long longValue;
     double doubleValue;
};
int main()
{
    numericUnion myUnion;
    myUnion.intValue = 3;
    cout << myUnion.intValue << endl;
    myUnion.doubleValue = 4.5;
    cout << myUnion.doubleValue << endl;
    cout << myUnion.intValue; cout << endl;
}