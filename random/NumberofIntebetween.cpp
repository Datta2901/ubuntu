#include <bits/stdc++.h>
using namespace std;
int MAX = 1000;
vector<int> Prefix = {0};
int repeated_digit(int n)
{
	unordered_set<int> a;
	int d;
	while (n != 0)
	{
		d = n % 10;
		if (a.find(d) != a.end())
			return 0;
		a.insert(d);
		n = n / 10;
	}
	return 1;
}
void pre_calculation(int MAX)
{
	Prefix.push_back(repeated_digit(1));
	for (int i = 2; i < MAX + 1; i++)
		Prefix.push_back(repeated_digit(i) + Prefix[i-1]);
}
int calculate(int L,int R)
{
    if(L<R)
	return Prefix[R] - Prefix[L-1];
	else
	    printf("INVALID INPUT");
    return -1;
}

// Driver code
int main()
{
	int L = 201, R = 200;
	
	// Pre-calculating the Prefix array.
	pre_calculation(MAX);
	
	// Calling the calculate function
	// to find the total number of number
	// which has no repeated digit
    int answer = calculate(L, R);
    if(answer != -1)
	cout << answer  << endl;

	return 0;
}

// This code is contributed by Rituraj Jain