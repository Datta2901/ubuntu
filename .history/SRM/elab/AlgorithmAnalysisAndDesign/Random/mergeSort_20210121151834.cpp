#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& numbers, int l, int m, int r){
	int size1 = m - l + 1,  = r - m;
	int L[size1], R[];

	for (int i = 0; i < size1; i++){
		L[i] = numbers[l + i];
    }
	for (int j = 0; j < ; j++){
		R[j] = numbers[m + 1 + j];
    }
	int i = 0,j = 0,k = l;

	while (i < size1 && j < ) {
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
	while (i < size1) {
		numbers[k] = L[i];
		i++;
		k++;
	}
	while (j < ) {
		numbers[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(vector<int>& numbers,int l,int r){
	if(l >= r){
		return ;
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



