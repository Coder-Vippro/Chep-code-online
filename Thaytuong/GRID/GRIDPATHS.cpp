#include <bits/stdc++.h>
using namespace std;
char a[1001][1001];
int f[1001][1001];
int n,m;
const int MOD=1e9+7;
int main()
{

    freopen("GRIDPATHS.inp","r",stdin);
    freopen("GRIDPATHS.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    m=n;
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
    if(a[1][1]=='*')
    {
        cout<<0;
        return 0;
    }
    else f[1][1]=1;
    for(int j=2;j<=m;j++)
    {
        if(a[1][j]!=42)
        f[1][j]=1;
        else if(a[1][j]==42)
        {f[1][j]=0;break;}
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i][1]!=42)
        f[i][1]=1;
        else if(a[i][1]==42)
        {f[i][1]=0;break;}
    }
    for(int i=2;i<=n;i++)
        {
            for(int j=2;j<=m;j++)
            {
                if(a[i][j]!=42)
                f[i][j]=(f[i-1][j]+f[i][j-1])%MOD;
                else f[i][j]=0;
            }
        }
    cout<<f[n][m]%MOD;
    return 0;
}
