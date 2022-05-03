// author = @ok4nakyol

#include <bits/stdc++.h>
#include <vector>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL)
#define int long long
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
using namespace std;

int32_t main()
{
    fastio;
	string s;
	while(cin >> s)
	{
		int len = s.size();
		char start = 'a';
		int ans = 0;
		for(int i=0;i<len;++i)
		{
			int x = start - s[i];
			int y = s[i] - start;
			if(x < 0)
				x+=26;
			if(y < 0)
				y+=26;
			ans += MIN(x,y);
			start=s[i];
			
		}
		cout << ans << endl;

	}
	return 0;
}


