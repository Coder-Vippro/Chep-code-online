#include <bits/stdc++.h>

using namespace std;

int n,d,a,f[2000000],maxx=0,kq=1;
int main()
{
    freopen("UCLN.INP","r",stdin);
    freopen("UCLN.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;f[a]++;
        maxx=max(maxx,a);
    }
    for(int i=1;i<=maxx;i++)
    {
        d=0;
        for(int j=1;j*i<=maxx;j++)
        d=d+f[j*i];
        if(d>1)kq=i;
    }
    cout<<kq;
    return 0;
}

