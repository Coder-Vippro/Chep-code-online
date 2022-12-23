#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TAO_QUAN.inp","r",stdin);
    freopen("TAO_QUAN.out","w",stdout);
    long long n,m,k;
    cin>>n>>m>>k;
    cout<<min((n+m-k)/3,min(n/2,m));
    return 0;
}
