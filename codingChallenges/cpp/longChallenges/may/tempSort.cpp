#include<iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define loop(n) for(int i=0;i<n;i++)
#define EXECUTE_FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define printVect(vect,dataStruct) for(vector<dataStruct> :: iterator it = vect.begin(); it !=vect.end();it++){cout << *it << " ";}
using namespace std;
bool IsSorted(vector<int> arr){
    for(int i = 1;i < arr.size();i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}
   
       
void bubbleSort(vector<int> & arr,vector<int> & indicesArray){
    bool flag = true;
    int length = arr.size();
    int prev,secondPrev,current;
    while(flag){
        flag  = false;
        for(int i = 2; i < length; i++){
            secondPrev = arr[i-2];
            prev = arr[i-1];
            current = arr[i];
            if(current > prev && current > secondPrev){
                continue;
            }
            flag = true;
            if(prev > current && prev > secondPrev){
                arr[i] = prev;
                arr[i-1] = secondPrev;
                arr[i-2] = current;
                indicesArray.push_back(i);
                indicesArray.push_back(i-2);
                indicesArray.push_back(i-1);
            }
            if(secondPrev > current && secondPrev > prev){
                arr[i] = secondPrev;
                arr[i-1] = current;
                arr[i-2] = prev;
                indicesArray.push_back(i);
                indicesArray.push_back(i-1);
                indicesArray.push_back(i-2);
            }
        }
    }
}

int main(){
    EXECUTE_FASTER
    int t;
    cin >> t;
    int n,k,a;
    while(t--){
        bool flag;
        cin >> n >> k;
        vector<int> arr;
        vector<int> indicesArray;
        loop(n){
            cin >> a;
            arr.push_back(a);
        }

        bubbleSort(arr,indicesArray);
        flag = IsSorted(arr);
        if(flag && indicesArray.size()/3 <= k){
            cout << indicesArray.size()/3 << endl;
            for(int i = 0; i < indicesArray.size(); i++){
                cout << indicesArray[i]+1 << " ";
                if((i+1) % 3 == 0){
                    cout << endl;
                }
            }
        }
        else{
            cout << -1 << endl;
        }

    }

    return 0 ;
}