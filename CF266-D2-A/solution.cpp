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
	int globalSum = 0;
	char inp,nextinp;
	cin >> inp;
	while((T-1) > 0)
	{
		cin >> nextinp;
		if(inp == nextinp){
			globalSum++;
		}
		inp = nextinp;
		T--;	
	}
    
	cout << globalSum << endl;
    return 0;
}

