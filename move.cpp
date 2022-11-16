#include <bits/stdc++.h>
using namespace std;
long long a[505][505],f[505][505];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MOVE.inp","r",stdin);
    freopen("MOVE.out","w",stdout);
    long long n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) cin>>a[i][j];
    f[1][1]=a[1][1];
    for(int j=2;j<=m;j++) f[1][j]=a[1][j]+f[1][j-1];
    for(int i=2;i<=n;i++) f[i][1]=a[i][1]+f[i-1][1];
    for(int i=2;i<=n;i++)
        for(int j=2;j<=m;j++)
            f[i][j]=max(f[i-1][j],f[i][j-1])+a[i][j];
    cout<<f[n][m];
    return 0;
}
