#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("manhinh.inp","r",stdin);
    freopen("manhinh.out","w",stdout);
    int a[100001],n,k,b;
    long long t=0;
    cin>>n>>k>>b;
    for(int i=1;i<=n;i++)cin>>a[i];
    if(b!=n)b=b%n;
   for(int i=1;i<=k;i++){t+=a[b];b++;if(b>n)b=b%n;}
    cout<<t;
    return 0;
}
