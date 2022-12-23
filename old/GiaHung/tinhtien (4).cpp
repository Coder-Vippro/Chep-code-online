#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("tinhtien.inp","r",stdin);
	freopen("tinhtien.out","w",stdout);
	long long a,b;
	cin>>a>>b;
    if(a*b>100000) cout<<a*b*4/5;
    else cout<<a*b;
	return 0;
}
