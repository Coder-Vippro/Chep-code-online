#include <bits/stdc++.h>
#define N int (1e7)
using namespace std;
int p[N+2];
int n;
long long kt(long long k)
{
    long long n=sqrt(k);
    if(k==n*n)
    return true;
    return false;
}
int main()
{
    freopen("SQRNUM.INP","r",stdin);
    freopen("SQRNUM.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n,x;
    cin>>n;
    long long k=1;
    while(n--)
    {
        cin>>x;
        k=k*x;
        if(kt(k)==true)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}