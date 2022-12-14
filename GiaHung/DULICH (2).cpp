#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("DULICH.inp","r",stdin);
	freopen("DULICH.out","w",stdout);
    long long d,m,a;
	cin>>d>>m;
	cout<<fixed<<setprecision(0);
	a=d/m;
	if(a*m<d) cout<<a+1;
	else cout<<a;
}
