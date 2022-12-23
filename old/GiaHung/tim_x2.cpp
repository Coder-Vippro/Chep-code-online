#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("tim_x2.inp","r",stdin);
	freopen("tim_x2.out","w",stdout);
	long long n,x=0,ans=0;
	cin>>n;
	while(ans<=n)
	{
		x=x+2;
		ans+=x;

	}
	cout<<x-2;
}
