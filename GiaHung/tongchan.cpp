#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tongchan.inp","r",stdin);
    freopen("tongchan.out","w",stdout);
    int a[1000],n,t=0;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++)
    if(a[i]%2==0) t=t+a[i];
    cout<<t;
    return 0;
}
