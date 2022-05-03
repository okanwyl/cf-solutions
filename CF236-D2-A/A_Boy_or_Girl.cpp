// author = @ok4nakyol

#include <bits/stdc++.h>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL)
#define int long long
using namespace std;

int32_t main()
{
    fastio;
    string w;
    cin >> w;
    sort(w.begin(), w.end());
    w.erase(unique(w.begin(), w.end()), w.end());
    if (w.length() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
