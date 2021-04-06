#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(int set[], int n, int sum){
	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	if (set[n - 1] > sum)
		return isSubsetSum(set, n - 1, sum);

	return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}

int main(){
    int size,b,c,d;
    vector<int>bb,cc,dd;
    for(int i = 0; i < size; i++){
        int e,f,g;
        cin >> e >> f >> g;
        bb.pushb_back(e);
        cc.push_back();
        dd.push_back()
    }

	return 0;
}
