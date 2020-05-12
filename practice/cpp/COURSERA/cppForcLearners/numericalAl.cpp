#include<bits/stdc++.h>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;

// template<classinputlter,class T>
// T accumulate(inputlter b,inputlter e,T t){
//     whose sum is initialized to t ;
//     and successive in the range (a,e)lements are added to the sum;
// }

// template<class inputlter,class T, class BinOp >
// T accumulate(inputlter b,inputlter e, T t,BinOp op){
//     whose sum is init with t ;
//     and successive elements are summed with 
//     sum =  Bop(sum ,element);
//     here actually bop is a function;
// }


int main()
 {
    EXECUTE_FASTER
    vector<int> numb;
    vector<int> sum;
    int a,b;
    cin >> a;
    loop(a){
        cin >> b;
        numb.push_back(b);
    }

    loop(a){
        cin >> b;
        sum.push_back(b);
    }

    double required ,answer;

    required = accumulate(numb.begin(),numb.end(),0,minus<int>());
    cout << "required sum = " << required << endl;
    // there are binary functions like plus<int>(),minus<int>() are exist in function.h library
    // answer = inner_product(numb.begin(),numb.end(),1);
    // cout << "product = " << answer << endl;
    
    return 0;
 }    