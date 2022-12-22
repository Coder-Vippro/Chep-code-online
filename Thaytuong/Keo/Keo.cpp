#include <bits/stdc++.h>

using namespace std;
long long n,ma=0,sa[100005],sb[100005],a[100005],b[100005],s=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;sa[0]=0;sb[n+1]=0;
    for(long long i=1;i<=n;i++){cin>>a[i];sa[i]=sa[i-1]+a[i];}
    for(long long i=1;i<=n;i++)cin>>b[i];
    for(long long i=n;i>=1;i--){s=s+b[i];sb[i]=s;}
    for(long long i=1;i<=n;i++)ma=max(ma,sa[i]+sb[i]);
    cout<<ma;
    return 0;
}
