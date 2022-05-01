#include <iostream>
 
using namespace std;
 
int main()
{
	int l,b;
 
	cin >> l >> b;
	int year = 0;
	do
	{
		l *= 3;
		b *= 2;
		year++;
	}while(l <= b);
	
 
	cout << year << endl;
	return 0;
}
