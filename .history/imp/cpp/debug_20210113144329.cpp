#include <cstring>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial (int x) {
  if (!x) return 1;
  return x * factorial (x - 1);
}
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr << name << " = " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " = " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
	std::cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
int main (){
  int i = 1, j = 2, k = 3;
  trace (i,j,k);
  trace(i);
  trace (1 << 30);
  trace(factorial(1), factorial(2), factorial(3), factorial(4));
  deb()
}