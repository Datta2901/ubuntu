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
intcompute(samplee1)
{
returnint(e1.a+e1.b)-5;
}
intmain()
{
samplee;
e.test();
cout<<compute(e);
return0;