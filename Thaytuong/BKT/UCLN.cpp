#include <bits/stdc++.h>

using namespace std;
int a[1000000];
int main()
{
    freopen("UCLN.inp","r",stdin);
    freopen("UCLN.out","w",stdout);
    int n, ma=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)ma=max(ma, __gcd(a[i], a[j]));
    cout<<ma;
    return 0;
}
