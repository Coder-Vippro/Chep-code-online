#include <bits/stdc++.h>

using namespace std;
long long A[1000001];
long long B[1000001];
long long f[10001][10001];
long long n,k;
int main()
{
    freopen("LINHVAT.INP","r",stdin);
    freopen("LINHVAT.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    for(long long i=1;i<=n;i++)
    {
        cin>>B[i];
    }
    f[1][0]=A[1];
    f[1][1]=B[1];
    for(long long i=2;i<=n;i++)
    {
        f[i][0]=min(f[i-1][0],f[i-1][1]+k)+A[i];
        f[i][1]=min(f[i-1][1],f[i-1][0]+k)+B[i];
    }
    cout<<min(f[n][1],f[n][0]+k);
    return 0;
}
