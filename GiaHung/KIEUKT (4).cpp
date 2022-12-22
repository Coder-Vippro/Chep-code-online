#include <bits/stdc++.h>
using namespace std;
long long f[100001],nn,t;
int main()
{
	freopen("trochoi.inp","r",stdin);
	freopen("trochoi.out","w",stdout);
	f[1]=1;
	for(int i=2;i<=100000;i++)
    {
        nn=i/2;t=f[nn]+(nn+1)/2;
        if(i%2==1) f[i]=f[i-1]+1;
        else f[i]=min(f[i-1]+1,t);
    }
    long long n,so;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>so;
        cout<<f[so]<<endl;
    }
	return 0;
}
