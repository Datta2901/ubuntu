 #include <iostream>
 class B {
 public:
    virtual void foo(int i){std::cout << "B::foo(int) " << i << "\n";}
    virtual void foo(double x){std::cout << "B::foo(double) " << x << "\n";}
 };

 class D: public B {
 public:
    void foo(int i){std::cout << "D::foo(int) " << i << "\n";}
    void foo(double x){std::cout << "D::foo(double) " << x << "\n";}
 };


int main()
{
  D d;
  B b, *pb = &b;
  b.foo(11);
  d.foo(11.0005);
  b.foo(9.5);
  d.foo(9.5);
  pb -> foo(9);
}
