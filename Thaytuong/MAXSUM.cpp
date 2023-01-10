#include <bits/stdc++.h>

using namespace std;
int f[105][105], a[105][105];
int main()
{
    freopen("MAXSUM.inp","r",stdin);
    freopen("MAXSUM.out","w",stdout);
    int n, m, mx=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++)cin>>a[i][j];
    }
    for(int i=1;i<=m;i++)f[i][1]=a[i][1]+a[i-1][1];
    for(int i=1;i<=n;i++)f[1][i]=a[1][i]+a[1][i-1];
    for(int j=2;j<=n;j++)
    {for(int i=1;i<=m;i++)
        f[i][j]=max(f[i-1][j-1], max(f[i][j-1], f[i+1][j-1]))+a[i][j];
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++)cout<<f[i][j]<<" ";
        cout<<"\n";
    }
    for(int i=1;i<=m;i++)mx= max(mx, f[i][n]);
    cout<<mx;
    return 0;
}
