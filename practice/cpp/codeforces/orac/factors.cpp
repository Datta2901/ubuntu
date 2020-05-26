#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int a,b;
		cin >> a >> b;
		if(a % 2==0)
		{
			cout << a + 2*b << endl;
			continue;
		}
		int c = 0;
		for(int i = a; i>=2; i-= 2){
			if(a % i==0){
                c = i;
            }
        }    	
		cout << a + c + 2 * ( b - 1) << endl;
	}
	return 0;
}