#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
  
   int t=1,d,i=0;
   cin>>t>>d;
   int arr[t];
   while(t-- > 0)
   {
      cin >> arr[i];
      i++;
   }
   sort(0, d);
   cout << arr[d/2] << endl;
   
  
   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
   return 0;
}
void solve()
{
	cout << "Hello World" << endl;
}
