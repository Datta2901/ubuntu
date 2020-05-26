// In the header <exception>  is std::exception and derived classses


// logic_error
// invalid_argument
// domain_error
// length_error
// out_of_range
// future_error(C++11)
// runtime_error
// range_error
// overflow_error
// underflow_error
// regex_error(C++11)
// system_error(C++11)
// ios_base::failure(C++11)
// bad_typeid
// bad_cast
// bad_weak_ptr(C++11)
// bad_function_call(C++11)
// bad_alloc
// bad_array_new_length(C++11)
 
// Member functions
// (constructor)
// constructs the exception object 
// (public member function)
// (destructor)
// [virtual]
// destructs the exception object 
// (virtual public member function)
// operator=
// copies exception object 
// (public member function)
// what
// [virtual]
// returns an explanatory string 
// (virtual public member function)
 
 
// Lets use the std::exception to define our own exception class and use it.
 
#include <iostream>
#include <exception>
using namespace std;
 
class MyException : public exception
{
  public:
  const char * what () const throw ()
  {
    return "My Exception";
  }
};
 
int main()
{
  try
  {
    cout << "Do some Computing until something goes wrong.\n";
    throw MyException();
  }
  catch(MyException & e)
  {
    cout << "MyException caught" << endl;
    cout << e.what() << endl;
  }
}
 
 
// Exception classes can be developed in conjunction with user defined class to provide error handling. So if you define a class MyObject  --  you might also define a class MyObjectException.
 
