#include <bits/stdc++.h>
using namespace std;
int a[1001][1001];
int f[1001][1001];
int f1[1001][1001];
int f2[1001][1001];
int f3[1001][1001];
int n,m;
const int MOD=1e9+7;
int main()
{
    freopen("MUSHROOM.inp","r",stdin);
    freopen("MUSHROOM.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
    
    if(a[1][1]==-1)
    {
        cout<<0;
        return 0;
    }
    else f[1][1]=1;
    f1[1][1]=1;f2[1][1]=1;f3[1][1]=1;
    for(int j=2;j<=m;j++)
    {
        if(a[1][j]!=-1)
        f[1][j]=1;
        else if(a[1][j]==-1)
        {f[1][j]=0;break;}
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i][1]!=-1)
        f[i][1]=1;
        else if(a[i][1]==-1)
        {f[i][1]=0;break;}
    }
    for(int i=2;i<=n;i++)
        {
            for(int j=2;j<=m;j++)
            {
                if(a[i][j]!=-1)
                f[i][j]=(f[i-1][j]+f[i][j-1])%MOD;
                else f[i][j]=0;
            }
        }
        for(int i=2;i<=n;i++)
        {
            if(a[i][1]==1)f1[i][1]=1;else f1[i][1]==0;
            if(a[i][1]==2)f2[i][1]=1;else f2[i][1]==0;
            if(a[i][1]==3)f3[i][1]=1;else f3[i][1]==0;
        }
        for(int j=2;j<=m;j++)
        {
            if(a[1][j]==1)f1[1][j]=1;else f1[1][j]==0;
            if(a[1][j]==2)f2[1][j]=1;else f2[1][j]==0;
            if(a[1][j]==3)f3[1][j]=1;else f3[1][j]==0;
        }
        for(int i=2;i<=n;i++)
        {
            for(int j=2;j<=m;j++)
            {
                if(a[i][j]==1) f1[i][j]=(f1[i-1][j]+f1[i][j-1])%MOD;else f1[i][j]==0;
                if(a[i][j]==2) f2[i][j]=(f2[i-1][j]+f2[i][j-1])%MOD;else f2[i][j]==0;
                if(a[i][j]==3) f3[i][j]=(f3[i-1][j]+f3[i][j-1])%MOD;else f3[i][j]==0;
            }
        }
    cout<<((f[n][m]-f1[n][m]+MOD)%MOD-f2[n][m]-f3[n][m]+MOD)%MOD;
    return 0;
}
