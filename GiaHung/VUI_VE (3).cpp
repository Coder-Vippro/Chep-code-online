#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("VUI_VE.inp","r",stdin);
	freopen("VUI_VE.out","w",stdout);
	int n,a[1000];
	cin>>n;
	for(int i=1;i<=n;i++){
      cin>>a[i];
      if(a[i]%2==0)cout<<"NO";
      else cout<<"YES";
      cout<<endl;
	}
	return 0;
}

