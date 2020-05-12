#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define inc_sort(v) sort(v.begin(),v.end());
#define pb push_back
#define endl '\n'
using namespace std;
template<class forwiter>
void print(forwiter first,forwiter last,const char* title){

    while(first != last){
        cout << *first++ << "\t";
    }
     cout << endl;
}


int main(){
    int size;
    cin >> size;
    int data[size],a=1;
    for(int i = size; i > 0; i++){
        data[i] = i; 
    }

    // print(data,data+size,"Original");
    transform(data,data+size,data,bind2nd(times<int>(),2));

    return 0;
}