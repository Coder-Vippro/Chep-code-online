#include <bits/stdc++.h>

using namespace std;
int a[10000];
int main()
{
    //freopen("BANH.inp","r",stdin);
    //freopen("BANH.out","w",stdout);
    int n, x;
    cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)x-=a[i];
    int d=n;
    d+=x/a[1];
    cout<<d<<' '<<x;
    return 0;
}
