#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(1,size); // define the range

    for(int n=; n<40; ++n)
        std::cout << distr(gen) << ' ';
    return 0;
}