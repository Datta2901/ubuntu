#include<bits/stdc++.h>
using namespace std;

vector<int> BubbleSort(vector<int> numbers){
    for (int i = 0; i < numbers.size(); i++) {  
       
    }  
    return numbers;
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
	mergeSort(, 0, _size - 1);

    cout << "Elements after sorted ";
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }

    return 0;
}
void merge(int [], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];

	for (int i = 0; i < n1; i++)
		L[i] = [l + i];
	for (int j = 0; j < n2; j++)
		R[j] = [m + 1 + j];
	int i = 0;
	int j = 0;
	int k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			[k] = L[i];
			i++;
		}
		else {
			[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int [],int l,int r){
	if(l>=r){
		return;
	}
	int m = (l+r-1)/2;
	mergeSort(,l,m);
	mergeSort(,m+1,r);
	merge(,l,m,r);
}



int main()
{
	int [] = { 12, 11, 13, 5, 6, 7 };
	int _size = sizeof() / sizeof([0]);
	mergeSort(, 0, _size - 1);


