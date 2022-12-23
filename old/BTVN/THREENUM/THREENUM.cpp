#include <bits/stdc++.h>
using namespace std;
long long n,a[100001],s;
int main()
{
	//freopen("THREENUM.INP","r",stdin);
	//freopen("THREENUM.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=n;k++)
        {if(i!=j&&j!=k&&i!=k)
            if(2*a[i]-3*a[j]+5*a[k]>s)
                s=2*a[i]-3*a[j]+5*a[k];
            }
            cout<<s;

    return 0;
}
