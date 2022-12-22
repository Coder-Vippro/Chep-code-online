#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("maxsum.inp","r",stdin);
    freopen("maxsum.out","w",stdout);
    long long n,so,t=0;
    cin>>n;
    for ( int i=1; i<=n ;i++)
	{
        	cin >> so;
        	if (i%2==0) t=t-so;else t=t+so;
    	}
    cout<<t;
}
