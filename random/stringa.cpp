#include <iostream>
using namespace std;
void compute(unsigned long int S,
			unsigned long int X)
{
	unsigned long int A = (S - X)/2;
	int a = 0, b = 0;
	for (int i=0; i<8*sizeof(S); i++)
	{
		unsigned long int Xi = (X & (1 << i));
		unsigned long int Ai = (A & (1 << i));
		if (Xi == 0 && Ai == 0)
		{
		}
		else if (Xi == 0 && Ai > 0)
		{
			a = ((1 << i) | a);
			b = ((1 << i) | b);
		}
		else if (Xi > 0 && Ai == 0)
		{
			a = ((1 << i) | a);	
		}
		else 
		{
			cout << "Not Possible" << endl;
			return;
		}
	}
	cout << "a = " << a << endl << "b = " << b << endl;
}
int main()
{   
    int t;
    cin >> t;
    while(t--){
        unsigned long int S = 4, X = 2;
        cin >> S >> X;
        compute(S, X);
    }
	return 0;
}