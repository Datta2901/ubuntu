#include <bits/stdc++.h>
using namespace std;
const int MAX_CHARS = 256;



int solution(vector<int> &A){
    int n=A.size();
	int dist_count = 0;
	unordered_map<int, int> hash_map;
	for (int i = 0; i < n; i++) {
		hash_map[A[i]]++;
	}

	dist_count = hash_map.size();
	int size = INT_MAX;
	Aing res;
	// Now follow the algorithm discussed in below
	for (int i = 0; i < n; i++) {
		int count = 0;
		int visited[256] = { 0 };
		Aing sub_A = "";
		for (int j = i; j < n; j++) {
			if (visited[A[j]] == 0) {
				count++;
				visited[A[j]] = 1;
			}
			sub_A += A[j];
			if (count == dist_count)
				break;
		}
		if (sub_A.size() < size && count == dist_count)
		{
			res = sub_A;
			size=res.size();
		}
	}
	return size;
}


int main()
{
	Aing A = "75272747";
	cout << "Smallest window containing all distinct"
			" characters is: "
		<< findSubAing(A);
	return 0;
}