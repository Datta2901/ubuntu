#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int cp(string X, string Y)
{
	string XY = X.append(Y);
	string YX = Y.append(X);
	return XY.compare(YX) > 0 ? 1 : 0;
}

int main()
{
    int size;
    cin >> size;
	vector<string> numbers;
    for(int i = 0; i < size; i++){
        string a;
        cin >> a;
        numbers.push_back(a);
    }

	sort(numbers.begin(), numbers.end(), cp);
	for (int i = 0; i < numbers.size(); i++)
		cout << numbers[i] << " ";
	
	return 0;
}