#include <bits/stdc++.h>

using namespace std;

int n,d,a,f[200005],maxx=0,kq=1;
int main()
{
    freopen("UCLN.INP","r",stdin);
    freopen("UCLN.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){cin>>a;f[a]++;}
    for(int i=1;i<=1e6;i++){d=0;
        for(int j=1;j*i<=1e6;j++)d=d+f[j*i];if(d>1)kq=i;}
    cout<<kq;
    return 0;
}
