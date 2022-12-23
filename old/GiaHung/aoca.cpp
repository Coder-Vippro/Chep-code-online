#include <bits/stdc++.h>

using namespace std;
char a[100][100];
int main()
{
    //freopen("demtau.inp","r",stdin);
    int n,m ;
    int d=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
    {
        cin>>a[i][j];
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
    {
        if(a[i][j]=='1')
           {
                if(a[i][j+1]=='0'&&a[i+1][j]=='0') d++;
                else if(a[i][j+1]=='0'&&i==n) d++;
                else if(a[i+1][j]=='0'&&j==m) d++;
                else if(i==n&&j==m) d++;
           }
    }
    cout<<d;
    return 0;
}
