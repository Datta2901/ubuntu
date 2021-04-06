#include<iostream>
using namespace std;
class sample
{
private:
int a,b;
public:
void test()
{
a=100;
b=200;
}
friend int compute(sample e1);
};
int compute(sample e1)
{
return int(e1.a+e1.b)-5;
}
int main()
{
samplee;
e.test();
cout<<compute(e);
return 0;
}