#include <bits/stdc++.h>

using namespace std;
int n,m;
int main()
{
    freopen("Bai03.inp","r",stdin);
    freopen("Bai03.out","w",stdout);
    cin>>n>>m;
    if(n<m)
    {
        for(int i=1;i<=n;i++)
             if(j%2==1)
            cout<<i<<" ";
    }
    else
    {
        for(int j=0;j<=m;j++)
            if(j%2==0)
            cout<<j<<" ";
    }
    return 0;
}
