#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("GIAY_IN.inp","r",stdin);
	freopen("GIAY_IN.out","w",stdout);
	int n,a,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
      cin>>a;
      s=s+(a+1)/2;
	}
	cout<<s;
	return 0;
}

