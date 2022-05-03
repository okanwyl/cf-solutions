// author = @ok4nakyol

#include <bits/stdc++.h>
#include <vector>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL)
#define int long long
using namespace std;

int32_t main()
{
    fastio;
    int T;
	cin >> T;
	int globalCrimeCount = 0;
	int avaible = 0;
	int input;
	while(T-- > 0)
	{
		cin >> input; 
		if(input < 0 && avaible == 0)
		{
			globalCrimeCount--;
		}else if( input < 0 && avaible > 0 && avaible >= abs(input))
		{
			avaible -= abs(input);
		}
		else
			avaible += input;
	

	}
	cout << abs(globalCrimeCount) << endl;
    
    return 0;
}
