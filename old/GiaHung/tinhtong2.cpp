#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("tinhtong2.inp","r",stdin);
	freopen("tinhtong2.out","w",stdout);
	long long n;
	cin>>n;
	if(n%2>0) n--;
	cout<<(n+2)*((n-2)/2+1)/2;
}
