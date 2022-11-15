#include <bits/stdc++.h>
using namespace std;
const long long M=1e9+7;
int a[101][101];
int f1[101][101],f2[101][101],f3[101][101],f[101][101];
int main()
{

    freopen("MUSHROOM.inp","r",stdin);
    freopen("MUSHROOM.out","w",stdout);
    int n, k=1,k1=1,k2=1,k3=1,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    f[1][1]=1,f1[1][1]=1;f2[1][1]=1;f3[1][1]=1;
    for(int i=2;i<=n;i++){
            if(a[1][i]==-1)k=0;
            f[1][i]=k;
            if(a[1][i]!=1)k1=0;
            f1[1][i]=k1;
            if(a[1][i]!=2)k2=0;
            f2[1][i]=k2;
            if(a[1][i]!=3)k3=0;
            f3[1][i]=k3;
    }
    k1=1;k2=1;k3=1;k=1;
    for(int i=2;i<=m;i++){
            if(a[i][1]==-1)k=0;
            f[i][1]=k;
            if(a[i][1]!=1)k1=0;
            f1[i][1]=k1;
            if(a[i][1]!=1)k2=0;
            f2[i][1]=k2;
            if(a[i][1]!=1)k3=0;
            f3[i][1]=k3;
    }
    for(int i=2;i<=n;i++)
        for(int j=2;j<=m;j++){
        if(a[i][j]!=-1) f[i][j]=(f[i-1][j]+f[i][j-1])%M;else f[i][j]=0;
        if(a[i][j]==1) f1[i][j]=(f1[i-1][j]+f1[i][j-1])%M;else f1[i][j]=0;
        if(a[i][j]==2) f2[i][j]=(f2[i-1][j]+f2[i][j-1])%M;else f2[i][j]=0;
        if(a[i][j]==3) f3[i][j]=(f3[i-1][j]+f3[i][j-1])%M;else f3[i][j]=0;
        }

    cout<<f[n][m]-f1[n][m]-f2[n][m]-f3[n][m];
    return 0;
}
