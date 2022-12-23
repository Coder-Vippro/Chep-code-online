#include <bits/stdc++.h>

using namespace std;
int a[21];
int n,vt,vtmin;
int main()
{
    freopen("SXCHON.INP","r",stdin);
    freopen("SXCHON.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        vtmin=i;
        for(int j=i+1;j<=n;j++)
            if(a[j]<a[vtmin]) vtmin=j;
        swap(a[j],a[vtmin]);
        for(int j=1;j<=n;j++)
        {
            if(j==i||j==vtmin)cout<<'['<<a[i]<<']'<<" ";
            else cout<<a[j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
