#include <iostream>
#include <string>
using namespace std;

// Function to remove adjacent duplicates characters from a string
void removeDuplicates(string &S) {
	char prev = '\0';
	for (string::iterator it = S.begin(); it != S.end(); it++)
	{
		if (prev == *it) {
			S.erase(it);
			it--;
		}
		else {
			prev = *it;
		}
	}
}

// main function
int main()
{
	string S;
    cin >> S;
    int size = S.size();
    int k;
    cin >> k;
	removeDuplicates(S);
    int resize = S.size();
    cout <<(size - resize )* k << endl;
	return 0;
}