#include <bits/stdc++.h>

using namespace std;
long long nl(int n)
{
    long long kq=1,d=1;
    while(d!=n)
    {
        if(d*2>n)
        {
            kq=kq+n-d;
            d=n;
        }
        else
        {
            kq=kq+(d+1)/2;
            d=d*2;
        }
    }
    return kq;
}
int main()
{
    freopen("trochoi.inp","r",stdin);
    freopen("trochoi.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a==0||a==1)cout<<a;
        else cout<<nl(a);
        cout<<endl;
    }
    return 0;
}
