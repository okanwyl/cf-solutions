#include <iostream>
using namespace std;

int main()
{
	int n,input, globalSum;
	cin >> n;

	int count= 0;
	globalSum = 0;
	for(int j = 0; j < n; ++j)
	{
		for(int i = 0; i < 3; ++i)
		{
			cin >> input;
			globalSum += input;
		}
		if(globalSum >= 2)
			count++;
		globalSum = 0;
	}
	cout << count << endl;
	return 0;
}
