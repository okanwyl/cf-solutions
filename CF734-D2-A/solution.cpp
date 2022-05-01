#include <iostream>
 
using namespace std;
 
int main()
{
	int n;
	int antonWins = 0;
	int danikWins = 0;
 
	cin >> n;
 
	for(int i = 0; i < n; ++i)
	{
		char input;
		cin >> input;
		if(input == 'A')
			antonWins++;
		else
			danikWins++;
 
 
	}
 
	if(antonWins > danikWins)
		cout << "Anton" << endl;
	else if(danikWins > antonWins)
		cout << "Danik" << endl;
	else
		cout << "Friendship" << endl;
	return 0;
}
