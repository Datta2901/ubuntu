// example for thread
#include <iostream>
#include <thread>
#include <algorithm>
using namespace std;
typedef long long int  ull;
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
	std::cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
void findEven(ull start, ull end, ull* EvenSum) {
	for (ull i = start; i <= end; ++i){
		if (!(i & 1)){
			*(EvenSum) += i;
		}
	}
}
 
void findOdd(ull start, ull end, ull* OddSum) {
	for (ull i = start; i <= end; ++i){
		if (i & 1){
			(*OddSum) += i;
		}
	}
}
 
int main() {
    
	ull start = 0, end = 1900000000;
 
	ull OddSum = 0;
	ull EvenSum = 0; 
	// // // WITH THREAD
    // std::thread t1(findEven, start, end, &(EvenSum));
    // std::thread t2(findOdd, start, end, &(OddSum));
 
	// t1.join();
	// t2.join();
	// WITHOUT THREAD
	findEven(start,end, &EvenSum);
	findOdd(start, end, &OddSum);
	cout << "OddSum : " << OddSum << endl;
	cout << "EvenSum : " << EvenSum << endl;
	return 0;
}