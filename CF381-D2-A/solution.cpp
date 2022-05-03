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
	int n,i;
	cin>>n;
    while(n)
    {
        int a[n+2];
        for(i=1;i<=n;i++)
            cin>>a[i];
        int left=1,right=n,sum1=0,sum2=0;
        i=1;
        while(left<=right)
        {
            if(i%2==1)
            {
                if(a[left]>=a[right])
                    sum1+=a[left++];
                else
                    sum1+=a[right--];
            }
            else
            {
                if(a[left]>=a[right])
                    sum2+=a[left++];
                else
                    sum2+=a[right--];
            }
            i++;
		
		n--;
        }
        cout<<sum1<<" "<<sum2<<endl;
    }
    return 0;
}

