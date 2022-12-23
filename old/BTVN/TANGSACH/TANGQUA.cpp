#include <bits/stdc++.h>
using namespace std;
int a[10001],b;
int n,m;

int main()
{
    freopen("TANGQUA.INP","r",stdin);
    freopen("TANGQUA.OUT","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        a[b]++;
    }
    int kq=n*(n-1)/2;
    for(int i=1;i<=m;i++)
        kq=kq-(a[i]*(a[i]-1))/2;
    cout<<kq;
}