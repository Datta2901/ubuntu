#include<iostream>
usingnamespacestd;
classsample
{
private:
inta,b;
public:
void test()
{
a=100;
b=200;
}
friend int compute(samplee1);
};
int compute(samplee1)
{
return int(e1.a+e1.b)-5;
}
int main()
{
samplee;
e.test();
cout<<compute(e);
return 0;