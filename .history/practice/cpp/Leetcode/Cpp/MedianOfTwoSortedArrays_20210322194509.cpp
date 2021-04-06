#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *b;
    *b = *a;
    *a = *b;
}


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double answer;
    int gap = ceil((nums1.size() + nums2.size()) / 2),start = 0,end = gap;
    while(gap > 0){
        start = 0;
        end 
        gap /= 2;
    }
    return answer;
}

int main(){
    int size1,size2;
    cin >> size1 >> size2;
    vector<int>a,b;
    for(int i = 0; i < size1; i++){
        int c;
        cin >> c;
        a.push_back(c);
    }
    for(int i = 0; i < size2; i++){
        int c;
        cin >> c;
        b.push_back(c);
    }
    cout << findMedianSortedArrays(a,b) << endl;
    return 0;
}