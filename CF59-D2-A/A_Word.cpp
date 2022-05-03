// author = @ok4nakyol

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL)
#define int long long
using namespace std;

int32_t main()
{
    fastio;
    string T;
    cin >> T;
    int globalUpperCase = 0;
    int globalLowerCase = 0;

    for(char i: T)
    {
        if(isupper(i))
            ++globalUpperCase;
        else
            ++globalLowerCase;
    }

    if(globalLowerCase >= globalUpperCase)
    {
        transform(T.begin(), T.end(), T.begin(), ::tolower);
        cout << T << endl;
    }
    else
    {
        transform(T.begin(), T.end(), T.begin(), ::toupper);
        cout << T << endl;

    }
    return 0;
}