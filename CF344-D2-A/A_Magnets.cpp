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
    int n, i, c = 0;
    cin >> n;
    int a[100000];
    i = 0;
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
            c++;
    }
    cout << c << endl;
    return 0;
}