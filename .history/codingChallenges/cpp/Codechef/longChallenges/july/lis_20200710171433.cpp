#include<bits/stdc++.h>
using namespace std;
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}cout << endl;
int main() {
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     scanf("%d", &x);
    //     vector<int>::iterator it = lower_bound(d.begin(), d.end(), x);
    //     if (it == d.end()){ d.push_back(x) ;cout << x;}
    //     else *it = x;
    // }
    // printf("LIS = %d\n", d.size());
    int size;
    cin >> size;
    vector<int> number,lis;
    vector<int>:: iterator it;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        number.push_back(a);
    }
    d.pushb(number[0]);
    cout << number[0] << " ";
    long long int sum = 0;
    int query = number[size - 1];
    for(int i = 1; i < size; i++){
        it = lower_bound(lis.begin(),lis.end(),number[i]);
        if(it == lis.end() && *it <= number[size - 1]){
            lis.pb(number[i]);
            cout << number[i] << " ";
            sum += number[i];
        }
    }
    cout << endl; 
    printVect(lis,int);
    cout << "sum " << sum << " size is " << lis.size();
    return 0;
}