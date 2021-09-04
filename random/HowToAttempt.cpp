#include<bits/stdc++.h>
using namespace std;

int getCombinataion(int n){
    return n * (n - 1) / 2;
}


// int maxgrops(int input1,int input2[]){
//     map<int,int>fre;
//     vector<int> aa;
//     int answer = 0;
//     for(int i = 0; i < input1; i++){
//         fre[input2[i]]++;
//     }
//     for(auto i : fre){
//         aa.push_back(i.second);
//     }
    
//     sort(aa.begin(),aa.end());
//     for(int i = aa.size() - 1; i >= 0; i--){
//         if(aa[i] >= 2){
//             answer += (aa[i]/2);
//         }
//     }
//     return answer;
// }

int maxgrops(int input1,int input2[]){
    map<int, int> mm;
    int ans = 0,y;
    vector<int> a(input1, 0);
    for (int i = 0; i < input1; i++){
        mm[input2[i]]++;
    }
    for (auto p : mm){
        y = p.second;
        ans += (y / 2);
    }
    return ans;
}


int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << maxgrops(size,arr) << endl;

    return 0;
}
// for(map<int,int>::iterator it = fre.begin(); it != fre.end(); it++){
    //     aa.push_back(it->second);
    // }