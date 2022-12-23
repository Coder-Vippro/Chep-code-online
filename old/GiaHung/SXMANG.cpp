#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SXMANG.inp","r",stdin);
    freopen("SXMANG.out","w",stdout);
    long long n;cin>>n;
    long long a[n],s=0;
    for(long long i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
     for(long long i=0;i<n;i++)cout<<a[i]<<' ';
    return 0;
}

