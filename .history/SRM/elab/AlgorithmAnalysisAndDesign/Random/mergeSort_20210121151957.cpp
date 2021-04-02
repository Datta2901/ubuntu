#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& numbers, int le, int m, int r){
	int size1 = m - le + 1, size2 = r - m;
	int left[size1], Right[size2];

	for (int i = 0; i < size1; i++){
		left[i] = numbers[le + i];
    }
	for (int j = 0; j < size2; j++){
		Right[j] = numbers[m + 1 + j];
    }
	int i = 0,j = 0,k = le;

	while (i < size1 && j < size2) {
		if (left[i] <= Right[j]) {
			numbers[k] = left[i];
			i++;
		}
		else {
			numbers[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < size1) {
		numbers[k] = left[i];
		i++;
		k++;
	}
	while (j < size2) {
		numbers[k] = Right[j];
		j++;
		k++;
	}
}
void mergeSort(vector<int>& numbers,int le,int r){
	if(le >= r){
		return ;
	}
	int m = (le+r-1)/2;
	mergeSort(numbers,le,m);
	mergeSort(numbers,m+1,r);
	merge(numbers,le,m,r);
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



