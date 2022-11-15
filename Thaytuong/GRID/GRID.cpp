#include <bits/stdc++.h>
using namespace std;
char a[1000][1000];
int f[1000][1000];
int n,m;
int main()
{
    freopen("GRID.inp","r",stdin);
    freopen("GRID.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int m=n;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
    f[1][1]=0;
    for(int j=2;j<=m;j++)
    {
        if(a[1][j]!=42)
        f[1][j]=f[1][j-1]++;
        else if(a[1][j]==42)
        f[1][j]=f[1][j-1];
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i][1]!=42)
        f[i][1]=f[i-1][1]++;
        else if(a[i][1]==42)
        f[i][1]=f[i-1][1];
        //f[i][1]=a[i][1]+f[i-1][1];
    }
    for(int i=2;i<=n;i++)
        {
            for(int j=2;j<=m;j++)
            {
                f[i][j]=max(f[i-1][j],f[i][j-1]);
            }
        }
    cout<<f[n][m]+1<<endl;
    return 0;
}
