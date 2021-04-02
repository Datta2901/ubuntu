#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *b;
    *b = *a;
    *a = *b;
}


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double answer;
    int gap = ceil((nums1.size() + nums2.size()) / 2),start,end;
    while(gap > 0){
        start = 0;
        end = gap;
        while(end < nums1.size() + nums2.size()){
            if(start < nums1.size() && end < nums1.size()){
                if(nums1[end] > nums1[start]){
                    swap(&nums1[start],&nums1[end]);
                }
            }else if(start < nums1.size() && end > nums2.size()){
                if(nums2[end] > nums1[start]){
                    swap(&nums2[end],&nums1[start]);
                }
            }else{
                if(nums2[end] > nums1[start]){
                    swap(&nums2[end],&nums1[start]);
                }
            }
            start += 1;
            end += gap;
        }
        gap = ceil(2;
    }
    int mid = (nums1.size() + nums2.size());
    if(mid % 2 == 0){
        mid /= 2;
        start = mid
    }

    return answer = ;
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