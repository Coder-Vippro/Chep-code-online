#include <bits/stdc++.h>
using namespace std;
int a[10001];
int b[10001];   
int main()
{
    freopen("Mices.INP","r",stdin);
    freopen("Mices.OUT","w",stdout);
    int n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a.resize(n);
        b.resize(n);
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long d=0;
        for(int i=1;i<=n;i++)
        d=max(d,abs(b[i]-a[i]));
        cout<<d<<'\n';
    }
}