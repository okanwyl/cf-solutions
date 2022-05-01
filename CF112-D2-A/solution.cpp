#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
	string a,b;
	cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
	for(int i = 0; i < a.length(); ++i)
	{
		char ac = a.at(i);
		char bc = b.at(i);
		if( ac > bc ){

			cout << "1" << endl;
			exit(0);
		}else if( bc > ac )
		{
			cout << "-1" << endl;
			exit(0);
		}
	
	}
	cout << "0" << endl;
	
}

