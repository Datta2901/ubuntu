#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> numbers, int l, int m, int r){
	int n1 = m - l + 1, n2 = r - m;
	int L[n1], R[n2];

	for (int i = 0; i < n1; i++){
		L[i] = numbers[l + i];
    }
	for (int j = 0; j < n2; j++){
		R[j] = numbers[m + 1 + j];
    }
	int i = 0;
	inj = 0;
	int k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			numbers[k] = L[i];
			i++;
		}
		else {
			numbers[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		numbers[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		numbers[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int numbers[],int l,int r){
	if(l >= r){
		return;
	}
	int m = (l+r-1)/2;
	mergeSort(numbers,l,m);
	mergeSort(numbers,m+1,r);
	merge(numbers,l,m,r);
}

int main(){
    int size;
    cin >> size;
    vector<int> numbers;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
	mergeSort(numbers, 0, numbers.size() - 1);

    cout << "Elements after sorted ";
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }

    return 0;
}



