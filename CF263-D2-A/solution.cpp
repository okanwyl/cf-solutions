#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	for(int i = 0; i < 5;++i)
	{
		for(int j = 0; j < 5;++j)
		{
			int input;
			cin >> input;
			if(input == 1)
			{
				int req = abs(i - 2);
				req += abs(j - 2);
				cout << req << endl;
				break;
			}
		}
	}
	return 0;
}
