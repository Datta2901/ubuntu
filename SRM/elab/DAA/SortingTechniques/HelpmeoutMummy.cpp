#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
  	int t, m, s, n;
  	cin >> t;
  
  	while(t)
    {
      	cin >> m >> s >> n;
      	m *= 60;
      	int a[n], temps = 0, c;
      
      	for(int i = 0; i < n; ++i)
        	cin >> a[i];
      
      
      	ab:
      	for(int i = 0; i < n; ++i)
        {
          	if(a[i] >= a[i+1])
            {
              	temps += s;
          		c = a[i];
              	a[i] = a[i+1];
              	a[i+1] = c;
            }
        }
    		
      	if(is_sorted(a,a+n) == true)
        {
          	if(m >= temps)
              	cout << "1" << endl;
      
      		else
              	cout << "0" << endl;
		}
              
      	else 
          	goto ab;
      
      	--t;
    }
  
 	return 0; 
}