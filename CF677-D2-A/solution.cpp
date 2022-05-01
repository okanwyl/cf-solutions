#include <iostream>
 
using namespace std;
 
int main()
{
    int n, h;
    int globalSum = 0;
    cin >> n >> h;
    int input;
    for(int i = 0; i < n; ++i)
    {
        cin >> input;
        if(input <= h)
            globalSum++;
        else
            globalSum += 2;
    }
    cout << globalSum << endl;
    return 0;
}
