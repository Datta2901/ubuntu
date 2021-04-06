#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(1, 63); // define the range

    for(int n=0; n<40; ++n)
        std::cout << distr(gen) << ' ';
    return 0;
}