// generator object in c++
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class gen{
    public:
        gen(double x_zero,double increment):x(x_zero),inc(increment){}
        double operater(){
            x += inc;
            return x*x;
        }

    private:
        double x,inc;
};

double integrate(gen g, int n){
    
    vector<double> fx(n);
    generate(fx.begin(),fx.end(),g);

    return(accumulate(fx.begin(),fx.end(),0.0)/n);

}

int main(){

    const int n  = 10000;
    gen g (0.0,1/n);

    cout << integrate(g,n);

    return 0;
}


