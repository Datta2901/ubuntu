#include<bits/stdc++.h>
using namespace std;

int GetTheSafestPlace(int siz)

int main(){
    int size,personToKill;// given number of persons are there in the arrangement
    cin >> size >> personToKill;

    cout << GetTheSafestPlace(size,personToKill) << endl;
    return 0;
}
