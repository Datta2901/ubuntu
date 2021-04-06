#include<bits/stdc++.h>
using namespace std;

int GetTheSafestPlace(int size,int pos){
    if(size == 1){
        return 0;
    }
    return ( GetTheSafestPlace(size - 1,pos) + pos ) % size;
}

int main(){
    int size,personToKill;// given number of persons are there in the arrangement
    cin >> size >> personToKill;

    cout << GetTheSafestPlace(size,personToKill) << endl;
    return 0;
}
