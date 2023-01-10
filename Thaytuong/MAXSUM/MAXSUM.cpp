#include <bits/stdc++.h>

using namespace std;
int n,m;
int f[1001][1001],a[1001][1001];

int main()
{
    freopen("MAXSUM.inp","r",stdin);
    freopen("MAXSUM.out","w",stdout);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        f[i][1]=a[i][1];
    }
        for(int j=2;j<=n;j++)
        {
            f[1][j]=max(f[1][j-1],f[2][j-1])+a[1][j];
        }
    for(int i=2;i<=m-1;i++)
    {
        for(int j=2;j<=n;j++)
        {
            f[i][j]=max(max(f[i-1][j-1],f[i][j-1]),f[i+1][j-1])+a[i][j];
        }
    }
    for(int j=2;j<=n;j++)
    {
        f[m][j]=max(f[m][j-1],f[m-1][j-1])+a[m][j];
    }
    int kq=f[1][n];
    for(int i=1;i<=m;i++)
    {
        kq=max(kq,f[i][n]);
    }
    cout<<kq;
    return 0;
}