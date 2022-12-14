#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    int n,a[10001],d=1,kq=1;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i+1])d++;
        else
        {
            if(d>kq)kq=d;
            d=1;
        }
    }
    cout<<kq;
    return 0;
}
