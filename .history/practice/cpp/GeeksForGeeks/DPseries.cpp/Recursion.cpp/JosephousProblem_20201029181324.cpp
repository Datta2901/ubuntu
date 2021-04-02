#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,personToKill;// given number of persons are there in the arrangement
    cin >> size >> personToKill;

    cout << GetTheSafestPerson(size,personToKill);
    return 0;
}
